#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{   int binary;
    int charToDec;
    char MESSAGE[101];
    int binaryArr[7*100];
    int count1=0;
    int count0=0;
    int h;
    int shift=0;
    scanf("%[^\n]", MESSAGE);
    for(int j=0;j<strlen(MESSAGE);j++){
        charToDec=MESSAGE[j];//convert each char into its decimal equivalance
        //printf("%d\n",charToDec);
        for (int i = 6; i>=0; i--) {
            binary = charToDec % 2;
            //printf("%d",binary);
            binaryArr[i+shift]=binary;//binaryArr[] stores all the binary bits of the string
            charToDec = charToDec / 2;
            }
        shift+=7;//1st char: fill binaryArr[6]-->[0], 2nd char:fill binaryArr[13]-->[7], and so on
        // printf("\n");
    }
/* for(int k=0;k<7*strlen(MESSAGE);k++){
            printf("%d",binaryArr[k]);
}*/      
// printf("\n");
    int iteration=0;
    while ( iteration<7*strlen(MESSAGE)){   
        if(binaryArr[iteration]==1){
            h=iteration;
            printf("%d ",0);
            while(binaryArr[h]==1) {
                printf("%d",0);
                h++;
            }
        }
        if(binaryArr[iteration]==0){
            if(iteration!=0) printf(" ");
            h=iteration;
            printf("%d%d ",0,0);
                while(binaryArr[h]==0){
                    //count1++;
                    printf("%d",0);
                    h++;
                }
            /*bit '0' at the end of binaryArr[]--> h would be greater than the size of binaryArr[]
            Lets say binaryArr=1001010(1 char)--> h=7  in the end-->wanna stop the program right here*/
            //printf(" ");//this line will print a' ' even when h=7--> an extra space(dont want this)    
            /*Solution: only print out a space when h< the size of binaryArr[7]*/
            if (h < 7*strlen(MESSAGE)) printf(" "); 
        }
        iteration=h;
    }
        printf("\n");
    return 0;
}
