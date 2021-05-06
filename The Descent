#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    // game loop
    while (1) {
        int heightMax=0;
        int indexHeightMax=0;
        for (int i = 0; i < 8; i++) {
            // represents the height of one mountain.
            int mountain_h;
            scanf("%d", &mountain_h);
            if (mountain_h>heightMax){
                heightMax=mountain_h;
                indexHeightMax=i; //get index  
            }
        }
        printf("%d\n",indexHeightMax);//index of the mountain to be shot at
    }
    return 0;
}
