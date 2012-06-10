#import <Cocoa/Cocoa.h>

int main(int argc, char **argv)
{
  NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];

  [NSApplication sharedApplication];
  [[NSApplication sharedApplication] activateIgnoringOtherApps:YES];
  NSRect frame = NSMakeRect(100, 100, 1280, 720);
  NSUInteger styleMask = NSClosableWindowMask | NSResizableWindowMask | NSTitledWindowMask | NSMiniaturizableWindowMask;
  NSRect rect = [NSWindow contentRectForFrameRect:frame styleMask:styleMask];

  NSWindow * window = [[NSWindow alloc] initWithContentRect:rect styleMask:styleMask
  backing: NSBackingStoreBuffered defer:false];
  [window setTitle:@"Zombiez: 2013"];

  [window makeKeyAndOrderFront: window];
  [pool drain];
  [NSApp run];
}
