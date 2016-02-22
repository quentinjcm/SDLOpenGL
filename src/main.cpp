#include <iostream>
#include "SDLOpenGL.h"
#include <ngl/NGLInit.h>

void initializeGL();
void renderGL();

int main()
{
  SDLOpenGL window("My window", 0, 0, 1024, 720);
  window.makeCurrent();
  initializeGL();
  while(true){
    renderGL();
    window.swapWindow();
    SDL_Delay(10);
  }
  return EXIT_SUCCESS;
}

void initializeGL()
{
  ngl::NGLInit::instance();
  glClearColor(0.2, 0.8, 0.8, 1.0);
}

void renderGL()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
