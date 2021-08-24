#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
/*void removespaces(char *p){
    int n=0;
    for (int i=0;i<strlen(p);i++){
        if(p[i]!=' '){
           p[n++]=p[i];
        }
    }
    p[n]='\0';
}*/ //no need to remove spaces
int main()
{   int Tcount=0;
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ?";//27 chars
    int indexNum[27]={0};
    int numFill=0;
    int shift=0;
    int startFillArt[199]={0};//store the starting position of artArr[0][]
    static char artArr[29][783];//783=27 letters*29 maxlength
    int L;
    scanf("%d", &L);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[257];
    scanf("%[^\n]", T); fgetc(stdin);
    for (int i = 0; i < H; i++) {
        char ROW[1025];
        scanf("%[^\n]", ROW); fgetc(stdin);
        for(int j=0;j<(L)*27;j++){
            artArr[i][j]=ROW[j];
            //putchar(artArr[i][j]);
        }
        //putchar('\n');
    }
    for (int i=0;i<strlen(T);i++){
        if (!isalpha(T[i]) ||T[i]==' '){
            T[i]='?';
        }
    }
    for (int i=0;i<strlen(T);i++){
        T[i]=toupper(T[i]);
        //printf("%c",T[i]);
    }
    

    for(int f=0;f<strlen(alphabet);f++){//ascii art: A starts at 0,B:A+L,C:B+L
        indexNum[f]=numFill;
        //printf("%d ",indexNum[f]);
        numFill+=L;
    }
    int p=0;
    for (int k=0;k<strlen(T);k++){
        for(int g=0;g<strlen(alphabet);g++){
            if(T[k]==alphabet[g]) {
                //T[k]=indexNum[g];
                //int p=0;
                startFillArt[p]=indexNum[g];
                Tcount++;
                //printf("%d ",startFillArt[p]);
                p++;
            }
        }
    }
    int startFillArtNum=0;//starting index of the desired artArr[][startFillArtNum]
    for(int j=0;j<H;j++){
        for(int b=0;b<Tcount;b++){
            startFillArtNum=startFillArt[b];
            //printf("%d",startFillArtNum);
            while(startFillArtNum<startFillArt[b]+L){
                putchar(artArr[j][startFillArtNum]);
                startFillArtNum++;
            }
        }
        putchar('\n');    
    }
    return 0;
}

/* another solution_way shorter
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int letter_to_pos(char c)
{
    if (c >= 65 && c <= 90)
        return (c - 65);
    else if (c >= 97 && c <= 122)
        return (c - 32 - 65);
    else
        return (26);
}

int main()
{
    int L;
    scanf("%d", &L);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[257];
    scanf("%[^\n]", T); fgetc(stdin);
    for (int i = 0; i < H; i++) {
        char ROW[1025];
        scanf("%[^\n]", ROW); 
        fgetc(stdin);

        int j = 0;
        while (T[j] != '\0')
        {
            int pos_letter = letter_to_pos(T[j]) * L;
            int k = 0;
            while (k < L)
            {
                printf("%c", ROW[pos_letter + k]);
                k++;
            }
            j++;
        }
        printf("\n");
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    return (0);
}*/
