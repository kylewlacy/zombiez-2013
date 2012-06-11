#import <Cocoa/Cocoa.h>
#import <OpenGL/gl.h>
#import "../../../src/RenderView.h"

@interface GLView : NSOpenGLView {
  RenderView view;
}

- (GLView*)init;
- (void)drawRect:(NSRect)bounds;
@end
