#import "GLView.h"

@implementation GLView
  -(GLView*)init {
  }

  -(void)drawRect:(NSRect)bounds {
    view.render();
  }
@end
