//terminal graphics
/*

  playing around tring to print graphics to console
  prints a box scrolling through all coordinates
*/

#include <stdlib.h>
#include <stdio.h>        //printing to console
#include <time.h>
#define SCREEN_SQUARE 32  //size of display in terminal

void delay(long milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}


short display[SCREEN_SQUARE][SCREEN_SQUARE]; //bitmap

int main()
{
  for(int posY = 0; posY < SCREEN_SQUARE; ++posY)
  {
    for(int posX = 0; posX < SCREEN_SQUARE; ++posX)
    {
      for (int y = 0; y < SCREEN_SQUARE; ++y )
      {
        for(int x = 0; x < SCREEN_SQUARE; ++x)
        {
          // if(x % 4 == 0)
          //   printf("  ");
          // else
          if(x == posX && y == posY)
            printf("\u2588\u2588"); //two unicode halfboxes
          else
            printf("  ");
        }
        printf("\n");
      }
      delay(1000/60);
    }
    delay(1000/60);
  }
}
