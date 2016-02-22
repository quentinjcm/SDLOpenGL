#ifndef _SDLOPENGL_H_
#define _SDLOPENGL_H_

#include <SDL.h>
#include <string>

class SDLOpenGL
{
public:
  SDLOpenGL(const std::string &_name,
            int _x,
            int _y,
            int _width,
            int _height);
private:
  std::string m_name;
  int m_x;
  int m_y;
  int m_height;
  int m_width;
  SDL_GLContext m_gl_context;
  SDL_Window *m_window;

  void init();
  void createGLContext();
  void errorExit(const std::string &_msg) const;

};

#endif //_SDLOPENGL_H_
