#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int closestZ;
    int tempArr[9999]={0};
    // the number of temperatures to analyse
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int inputTemperature;
        int haveInput; 
        haveInput=scanf("%d", &inputTemperature);
        if (haveInput!=1){
            printf("0");
            exit(0);
        }
        tempArr[i]=inputTemperature;  
    }
    closestZ=tempArr[0];
    for (int i=1;i<n;i++){
        if (abs(closestZ)>abs(tempArr[i])){//checking for different magnitude of temp
            closestZ=tempArr[i];
        }else if( abs(closestZ)==abs(tempArr[i]) && tempArr[i]>0){//same magnitude of temp and temArr[i]>0
            // if (tempArr[i]<0 &&closestZ<0 ){closestZ=tempArr[i]}
            //if(tempArr[i]>0){
                closestZ=tempArr[i];
            //}
        }
    }
    //in case of closetZ=tempArr[i]<0--> closestZ remains the same
   printf("%d\n",closestZ);

    return 0;
}
