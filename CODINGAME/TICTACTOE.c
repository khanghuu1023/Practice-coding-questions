
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int horizontal=0;
int vertical=0;
int diagonal=0;
int no_winning_move=0;

int main()
{   
    int k=0;
    char box[3][4];
    for (int i = 0; i < 3; i++) {
        char line[4];
        scanf("%[^\n]", line); fgetc(stdin);
        for(int h=0;h<4;h++){
            box[i][h]=line[h];
        }
        //printf("%s\n",box[i]);
    } 
    int j=0;
    int m=0;
    
while(1){
    /*check decision:horizontal*/
    for (int i=0;i<3;i++){
            if((box[i][0]==box[i][1] && box[i][1]=='O' && box[i][2]=='.') ||( box[i][0]==box[i][1] && box[i][1]=='X' && box[i][2]=='.')){
                horizontal=1;
                break;
            }else if((box[i][1]==box[i][2] && box[i][1]=='O'&& box[i][0]=='.') ||( box[i][1]==box[i][2] && box[i][1]=='X'&& box[i][0]=='.')){
                horizontal=1;
                break;
            }else if((box[i][0]==box[i][2] && box[i][0]=='O'&& box[i][1]=='.') ||( box[i][0]==box[i][2] && box[i][0]=='X'&& box[i][1]=='.')){
                horizontal=1;
                break;
            }else{
                if(i==3){
                    horizontal=0;
                    break;
                }
            }
    }

    /*check decision:vertical*/
    for (int i=0;i<3;i++){
            if((box[0][i]==box[1][i] && box[0][i]=='O'&& box[2][i]=='.') ||( box[0][i]==box[1][i] && box[0][i]=='X'&& box[2][i]=='.')){
                vertical=1;
                break;
            }else if((box[1][i]==box[2][i] && box[1][i]=='O'&& box[0][i]=='.') ||( box[1][i]==box[2][i] && box[1][i]=='X'&& box[0][i]=='.')){
                vertical=1;
                break;
            }else if((box[0][i]==box[2][i] && box[0][i]=='O'&& box[1][i]=='.') ||( box[0][i]==box[2][i] && box[0][i]=='X'&& box[1][i]=='.')){
                vertical=1;
                break;
            }else{
                if(i==3){
                    vertical=0;
                    break;
                }
            }
    }

    /*check decision: diagonal*/
    while(1){
            if((box[0][0]==box[1][1] && box[0][0]=='O'&& box[2][2]=='.') ||( box[0][0]==box[1][1] && box[0][0]=='X'&& box[2][2]=='.')){
                diagonal=1;
                break;
            }else if((box[1][1]==box[2][2] && box[1][1]=='O'&& box[0][0]=='.') ||( box[1][1]==box[2][2] && box[1][1]=='X'&& box[0][0]=='.')){
                diagonal=1;
                break;
            }else if((box[0][0]==box[2][2] && box[0][0]=='O'&& box[1][1]=='.') ||( box[0][0]==box[2][2] && box[0][0]=='X'&& box[1][1]=='.')){
                diagonal=1;
                break;
            }
            else if((box[2][0]==box[1][1] && box[2][0]=='O'&& box[0][2]=='.') ||( box[2][0]==box[1][1] && box[2][0]=='X'&& box[0][2]=='.')){
                diagonal=1;
                break;
            }else if((box[1][1]==box[0][2] && box[1][1]=='O'&& box[2][0]=='.') ||( box[1][1]==box[0][2] && box[1][1]=='X'&& box[2][0]=='.')){
                diagonal=1;
                break;
            }else if((box[2][0]==box[0][2] && box[2][0]=='O'&& box[1][1]=='.') ||( box[2][0]==box[0][2] && box[2][0]=='X'&& box[1][1]=='.')){
                diagonal=1;
                break;
            }else{
                diagonal=0;
                break;
            }

    }
    /*check decision: no winning move*/
    if(vertical==0&&horizontal==0&&diagonal==0){
        no_winning_move=1;
        break;
    }
    break;//this break s for getting out of the whole loop

}
//printf("%d %d %d %d\n",horizontal,vertical,diagonal,no_winning_move);

    while(horizontal==1&&j<3){
            if(box[j][0]==box[j][1]&&box[j][0]!='.'){
                box[j][2]=box[j][1];
                horizontal=0;
            }else if(box[j][1]==box[j][2]&&box[j][1]!='.'){
                box[j][0]=box[j][1];
                horizontal=0;
            }else if (box[j][0]==box[j][2]&&box[j][0]!='.'){
                box[j][1]=box[j][0];
                horizontal=0;
            }
            j++;
            if(j==3){
                horizontal=0;
            }

    }
    
    while(vertical==1&&m<3){
            if(box[0][m]==box[1][m]&&box[0][m]!='.'){
                box[2][m]=box[0][m];
                vertical=0;
            }else if(box[1][m]==box[2][m]&&box[1][m]!='.'){
                box[0][m]=box[1][m];
                vertical=0;
            }else if (box[0][m]==box[2][m]&&box[0][m]!='.'){
                box[1][m]=box[0][m];
                vertical=0;
            }
            m++;
            if(m==3){
                vertical=0;
            }
    }

    while(diagonal==1){
            if(box[0][0]==box[1][1]&&box[0][0]!='.'){
                box[2][2]=box[0][0];
                diagonal=0;
            }else if(box[1][1]==box[2][2]&&box[1][1]!='.'){
                box[0][0]=box[1][1];
                diagonal=0;
            }else if (box[0][0]==box[2][2]&&box[0][0]!='.'){
                box[1][1]=box[0][0];
                diagonal=0;
            }else if(box[2][0]==box[1][1]&&box[2][0]!='.'){
                box[0][2]=box[2][0];
                diagonal=0;
            }else if (box[1][1]==box[0][2]&&box[1][1]!='.'){
                box[2][0]=box[1][1];
                diagonal=0;
            }else if (box[2][0]==box[0][2]&&box[2][0]!='.'){
                box[1][1]=box[2][0];
                diagonal=0;
            }
            
    }
    
    
    if(no_winning_move==1){
        printf("false");
    }else{

        for (int i = 0; i < 3; i++) {
            printf("%s\n",box[i]);
        }
    }

    return 0;
}
