 #include "draw.h"
#include <SDL2_gfxPrimitives.h>

 const int SCREEN_WIDTH = 700;
 const int SCREEN_HEIGHT = 700;
 void draw_recursive(SDL_Renderer* gRenderer, Sint16 x1, Sint16 y1, Sint16 x2, Sint16 y2, int depth)
 {
     if(depth == 6){
         return;
     }

     rectangleRGBA(gRenderer, x1, y1, x2, y2, 0x00, 0x00, 0x00, 0xFF);
     draw_recursive(gRenderer, x1 + (x2 - x1) / 3, y1, x1 + 2*((x2 - x1) / 3), y1 + (y2 - y1) / 3, depth + 1);
     draw_recursive(gRenderer, x1 + 2 * ((x2 - x1) / 3), y1 + (y2 - y1) / 3, x2,y1 + 2 * ((y2 - y1) / 3), depth + 1);
     draw_recursive(gRenderer, x1 + (x2 - x1) / 3, y1 + 2 * ((y2 - y1) / 3), x1 + 2*((x2 - x1) / 3),y2, depth + 1);
     draw_recursive(gRenderer, x1, y1 + (y2 - y1) / 3, x1 + (x2 - x1) / 3,  y1 + 2 * ((y2 - y1) / 3), depth + 1);
 }


void draw(SDL_Renderer* gRenderer) {


    draw_recursive(gRenderer, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, 0);


 }

 //matrix
 //draw_recursive(gRenderer, x1, y1 + (y2 - y1) / 3, x1 + (x2 - x1) / 3, 2 * ((y2 - y1) / 3), depth + 1);