#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define num_horses 99999
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main()
{   int closestDiff=0;
    int baseIndex=0;
    int shiftBase=0;
    int shiftForward=1;
    int strengthArr[num_horses];
    int N;
    int sorted=0;
    int temp;
    scanf("%d", &N);
    int val;
    for (int i = 0; i < N; i++) {
        int pi;
        scanf("%d", &pi);
        val=pi;
        /*if(closestDiff<val &&counting==1){
            closestDiff=val;
            counting++;
        }else if(closestDiff-pi) */
        strengthArr[i]=pi;
    }
     qsort(strengthArr, N, sizeof(int), cmpfunc);
   /* for( int n = 0 ; n < N; n++ ) {   
      printf("%d ", strengthArr[n]);
   }*/
   closestDiff=strengthArr[1]-strengthArr[0];
   for (int i=0;i<N-1;i++){
       if(closestDiff> (strengthArr[i+1]-strengthArr[i])){
           closestDiff=strengthArr[i+1]-strengthArr[i];
       }
   }
printf("%d", closestDiff);


    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
   /* closestDiff=abs(strengthArr[0]-strengthArr[1]);
    int count=1;

    while (shiftBase<(N-1)){
        for(int i=baseIndex;i<N-count;i++){
            if(closestDiff>abs(strengthArr[baseIndex+shiftBase]-strengthArr[i+shiftForward])){
               closestDiff=abs(strengthArr[baseIndex+shiftBase]-strengthArr[i+shiftForward]);
            }
        }
    shiftBase++;
    count++;
    shiftForward++;
    }
    printf("%d",closestDiff);*/
    return 0;

}
