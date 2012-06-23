#import <Cocoa/Cocoa.h>
#import <OpenGL/gl.h>
#import "RenderView.h"

@interface GLView : NSOpenGLView {
  RenderView view;
  NSTimer *renderLoopTimer;
}

- (GLView*)init;
- (void)prepareOpenGL;
- (void)awakeFromNib;
- (void)drawRect:(NSRect)bounds;

- (void)renderLoop:(id)sender;
@end
