#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 **/

int main()
{
    // the X position of the light of power
    int light_x;
    // the Y position of the light of power
    int light_y;
    // Thor's starting X position
    int initial_tx;
    // Thor's starting Y position
    int initial_ty;
    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);

    // game loop
    while (1) {
        // The remaining amount of turns Thor can move. Do not remove this line.
        int remaining_turns;
        
        char *direction_X = "";
        char *direction_Y = "";
        scanf("%d", &remaining_turns);
        if(initial_tx>light_x){
            initial_tx--;
            direction_X="W";
            //initial_tx--;
         }else if(initial_tx<light_x) {
            initial_tx++;
            direction_X="E";
            //initial_tx++;
         }
        if(initial_ty>light_y){
            initial_ty--;
            direction_Y="N";
            //initial_ty--;
         }else if(initial_ty<light_y) {
            direction_Y="S";
            initial_ty++;
         }
        
        printf("%s%s\n",direction_Y, direction_X );
        
    }
    return 0;
}
    /*alternative solution!! Print out the directions imediately within if-else blocks
    if (initial_ty<light_y) {
            printf("S");
            ++initial_ty;
        } else if (initial_ty>light_y) {
            printf("N");
            --initial_ty;
        } 
        
        if (initial_tx<light_x) {
            printf("E");
            ++initial_tx;
        } else if (initial_tx>light_x) {
            printf("W");
            --initial_tx;
        }
        
        printf("\n"); // A single line providing the move to be made: N NE E SE S SW W or NW
    }

    return 0;
}
 


*/

