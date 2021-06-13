/*
   Plans of tackling the problem:
    1> goingn through the char array b[],and obtain the total number of '0's found as well as their index postions and store these positions to an array zero_Index_Pos[] 
    2>do a loop num_of_zeros times:
        a>replace a '0' in b[] with a '1' by using the index positions stored in zero_Index_Pos[]
        b>do another loop startng the index location in a> till encountering another '0' or end of string: counting the num of ones found while doing the loop
        c> assign the total num of ones to a variable( longest_ones) and compare with its previous value
        d> reset b[] in a> back to '0'
    3> print out the final answer
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{   
    int num_of_Zeros=0;
    int zero_Index_Pos[1000]={0};
    char b[1000];
    int k=0; int counter=0, one_digits=0, m=0, shift=0, longest_ones=0;
    scanf("%[^\n]", b);
    for (int i=0;i<strlen(b);i++){
        if(b[i]=='0'){
            num_of_Zeros++;//total number of 0s found in b[]
            zero_Index_Pos[k]=i;//stores the index positions of 0s
            k++;
        }
    }
        for(int n=0;n<num_of_Zeros;n++){
            one_digits=0;   //reset one_digits for the next iteration
            b[zero_Index_Pos[n]]='1';
            m=0+shift;
        /*start counting the number of 1s found from the 0 right on the left till encountering another 0 or end of string*/
            while (b[m]!='0'&& m<strlen(b)){
                one_digits++;
                m++;
            }
            if(longest_ones<one_digits){
                longest_ones=one_digits;
            }
            shift=zero_Index_Pos[n]+1;//the location right after encountering a 0
            
            b[zero_Index_Pos[n]]='0';//change it back to 0 before mopving on to the next location of b[] 
        }
        
        printf("%d",longest_ones);
    return 0;
}
