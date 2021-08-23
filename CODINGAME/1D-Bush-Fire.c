/*General strategy: do a loop through each line and put out as many fires as possible*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{   
    int k=0;
    int total_water_drops=0;
    int N;
    int counting=0;
    scanf("%d", &N); fgetc(stdin);
    int f_index_arr[N];

    for (int i = 0; i < N; i++) {
        char line[256];
        scanf("%[^\n]", line); fgetc(stdin);
        counting=0;
        total_water_drops=0;
        while(counting<strlen(line)){
            if(line[counting]=='f'){
                total_water_drops++;
                counting+=3;
            }else{
                counting++;
            }
        }
            printf("%d\n",total_water_drops);
        }
    return 0;
}
