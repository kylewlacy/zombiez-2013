#import <Cocoa/Cocoa.h>
#import <OpenGL/gl.h>
#import "RenderView.h"

@interface GLView : NSOpenGLView {
  RenderView view;
}

- (GLView*)init;
- (void)drawRect:(NSRect)bounds;
@end
