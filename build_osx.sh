#!/bin/bash
cflags="-Wno-import"
ldflags="-lobjc -framework Foundation -framework Cocoa -framework OpenGL"

for file in platforms/osx/src/*.mm; do
  files="$files$file "
done
for file in src/*.cpp; do
  files="$files$file "
done
files="$files platforms/osx/src/main.m"

appdir="build/Zombiez 2013.app"
rm -r "$appdir"
mkdir -p "$appdir"/Contents/{_CodeSignature,Frameworks,MacOS,Plugins,Resources,Versions}
mkdir -p "$appdir"/Contents/Resources/en.lproj

for file in $files; do
  if [ -e "$file" ]; then
    fileobj=$(basename "$file")
    fileobj=${fileobj%.*}
    fileobj="build/$fileobj.o"
    gcc $cflags -c -o "$fileobj" "$file"

    fileobjs="$fileobjs$fileobj "
  fi
done
gcc $cflags $ldflags -o "$appdir"/Contents/MacOS/zombiez2013 $fileobjs
touch "$appdir"/Contents/PkgInfo
cp platforms/resources/* "$appdir"/Contents/Resources/
cp platforms/osx/resources/* "$appdir"/Contents/Resources/
cp platforms/osx/Info.plist "$appdir"/Contents/Info.plist
rm build/*.o

for xib in platforms/osx/nibs/*.xib; do
  nib=$(basename "$xib")
  nib=${nib%.*}.nib
  nib="$appdir/Contents/Resources/en.lproj/$nib"
  ibtool --errors --warnings --notices --output-format human-readable-text --compile "$nib" "$xib"
done
