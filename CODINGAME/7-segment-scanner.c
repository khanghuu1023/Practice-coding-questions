#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char line_1[901]={'0'};
    scanf("%[^\n]", line_1); fgetc(stdin);
    char line_2[901]={'0'};;
    scanf("%[^\n]", line_2); fgetc(stdin);
    char line_3[901]={'0'};;
    scanf("%[^\n]", line_3);
    int nums[10]={0,1,2,3,4,5,6,7,8,9};

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int index=0;
    int shift=0;
    int answer=0;
    int n=0;
    while(line_1[n]!='0'){
        for(index=0;index<3;index++){
            if(line_1[index+shift]==' '&&line_1[index+shift+1]=='_'&&line_1[index+shift+2]==' '&&line_2[index+shift]=='|'&&line_2[index+shift+1]==' '&&line_2[index+shift+2]=='|'&&line_3[index+shift]=='|'&&line_3[index+shift+1]=='_'&&line_3[index+shift+2]=='|' ){
                answer=0;
                printf("%d",answer);
            }
            if(line_1[index+shift]==' '&&line_1[index+shift+1]==' '&&line_1[index+shift+2]==' '&&line_2[index+shift]==' '&&line_2[index+shift+1]==' '&&line_2[index+shift+2]=='|'&&line_3[index+shift]==' '&&line_3[index+shift+1]==' '&&line_3[index+shift+2]=='|' ){
                answer=1;
                printf("%d",answer);
            }
            if(line_1[index+shift]==' '&&line_1[index+shift+1]=='_'&&line_1[index+shift+2]==' '&&line_2[index+shift]==' '&&line_2[index+shift+1]=='_'&&line_2[index+shift+2]=='|'&&line_3[index+shift]=='|'&&line_3[index+shift+1]=='_'&&line_3[index+shift+2]==' ' ){
                answer=2;
                printf("%d",answer);
            }
            if(line_1[index+shift]==' '&&line_1[index+shift+1]=='_'&&line_1[index+shift+2]==' '&&line_2[index+shift]==' '&&line_2[index+shift+1]=='_'&&line_2[index+shift+2]=='|'&&line_3[index+shift]==' '&&line_3[index+shift+1]=='_'&&line_3[index+shift+2]=='|' ){
                answer=3;
                printf("%d",answer);
            }
            if(line_1[index+shift]==' '&&line_1[index+shift+1]==' '&&line_1[index+shift+2]==' '&&line_2[index+shift]=='|'&&line_2[index+shift+1]=='_'&&line_2[index+shift+2]=='|'&&line_3[index+shift]==' '&&line_3[index+shift+1]==' '&&line_3[index+shift+2]=='|' ){
                answer=4;
                printf("%d",answer);
            }
            if(line_1[index+shift]==' '&&line_1[index+shift+1]=='_'&&line_1[index+shift+2]==' '&&line_2[index+shift]=='|'&&line_2[index+shift+1]=='_'&&line_2[index+shift+2]==' '&&line_3[index+shift]==' '&&line_3[index+shift+1]=='_'&&line_3[index+shift+2]=='|' ){
                answer=5;
                printf("%d",answer);
            }
            if(line_1[index+shift]==' '&&line_1[index+shift+1]=='_'&&line_1[index+shift+2]==' '&&line_2[index+shift]=='|'&&line_2[index+shift+1]=='_'&&line_2[index+shift+2]==' '&&line_3[index+shift]=='|'&&line_3[index+shift+1]=='_'&&line_3[index+shift+2]=='|' ){
                answer=6;
                printf("%d",answer);
            }
            if(line_1[index+shift]==' '&&line_1[index+shift+1]=='_'&&line_1[index+shift+2]==' '&&line_2[index+shift]==' '&&line_2[index+shift+1]==' '&&line_2[index+shift+2]=='|'&&line_3[index+shift]==' '&&line_3[index+shift+1]==' '&&line_3[index+shift+2]=='|' ){
                answer=7;
                printf("%d",answer);
            }
            if(line_1[index+shift]==' '&&line_1[index+shift+1]=='_'&&line_1[index+shift+2]==' '&&line_2[index+shift]=='|'&&line_2[index+shift+1]=='_'&&line_2[index+shift+2]=='|'&&line_3[index+shift]=='|'&&line_3[index+shift+1]=='_'&&line_3[index+shift+2]=='|' ){
                answer=8;
                printf("%d",answer);
            }
            if(line_1[index+shift]==' '&&line_1[index+shift+1]=='_'&&line_1[index+shift+2]==' '&&line_2[index+shift]=='|'&&line_2[index+shift+1]=='_'&&line_2[index+shift+2]=='|'&&line_3[index+shift]==' '&&line_3[index+shift+1]=='_'&&line_3[index+shift+2]=='|' ){
                answer=9;
                printf("%d",answer);
            }

        }
        shift+=3;
        n+=3;
        
    }

    return 0;
}

//  alternative solution(better cuz it utilizes string of arrays and pointer)
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>


// char *digits[] = {
//     /* 0 */ " _ | ||_|",
//     /* 1 */ "     |  |",
//     /* 2 */ " _  _||_ ",
//     /* 3 */ " _  _| _|",
//     /* 4 */ "   |_|  |",
//     /* 5 */ " _ |_  _|",
//     /* 6 */ " _ |_ |_|",
//     /* 7 */ " _   |  |",
//     /* 8 */ " _ |_||_|",
//     /* 9 */ " _ |_| _|"
// };
// char *digitChar = "0123456789";

// char convertDigit(char *digitStr){
//     char car;
//     for (int i=0;i<10;i++) {
//         if (strcmp(digits[i], digitStr) == 0) {
//             return digitChar[i];
//         }
//     }
//     return '0';
// }
// int main()
// {

//     char line_1[901];
//     scanf("%[^\n]", line_1); fgetc(stdin);
//     char line_2[901];
//     scanf("%[^\n]", line_2); fgetc(stdin);
//     char line_3[901];
//     scanf("%[^\n]", line_3);

//     int nbDigit = strlen(line_1)/3;
//     char *newNumber=malloc((nbDigit+1)*sizeof(char));
//     for (int i=0;i<nbDigit;i++){
//         char aDigit[10];
//         memcpy(&aDigit[0], &line_1[i*3], 3);
//         memcpy(&aDigit[3], &line_2[i*3], 3);
//         memcpy(&aDigit[6], &line_3[i*3], 3);
//         aDigit[9] = 0;
//         newNumber[i] = convertDigit(aDigit);
//     }
//     newNumber[nbDigit]=0;
//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");
    
//     printf("%s\n",newNumber);

//     return 0;
// }
// */
