// Platform-specific preprocessors can be found from:
// http://sourceforge.net/apps/mediawiki/predef/index.php?title=Operating_Systems
#ifdef _WIN32
  #include <gl/gl.h>
#elif __APPLE__ & __MACH__
  #include <OpenGL/gl.h>
#elif __linux__
  #include <GL/gl.h>
#endif

class RenderView {
  public:
    RenderView();
    void render();
};
