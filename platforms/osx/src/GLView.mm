#import "GLView.h"

@implementation GLView
  -(GLView*)init {
    if(self = [super init]) {
    }

    return self;
  }

  -(void)prepareOpenGL {
    GLint on = 1;
    [[self openGLContext] setValues:&on forParameter:NSOpenGLCPSwapInterval];

    view.prepare();
  }

  -(void)awakeFromNib {
    renderLoopTimer = [NSTimer timerWithTimeInterval:0.001 target:self selector:@selector(renderLoop:) userInfo:nil repeats:YES];

    [[NSRunLoop currentRunLoop] addTimer:renderLoopTimer forMode:NSDefaultRunLoopMode];
    [[NSRunLoop currentRunLoop] addTimer:renderLoopTimer forMode:NSEventTrackingRunLoopMode];
  }

  -(void)drawRect:(NSRect)bounds {
    view.update();
    view.render();
  }

  -(void)renderLoop:(id)sender {
    [self setNeedsDisplay:YES];
  }
@end
