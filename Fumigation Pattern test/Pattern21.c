/*

* * * * *
*
*
* * * * * * * * * *
*
*
*
*
* * * * *
*
*
*
*
*
*
*
*
* * * * * * * * * *


*/

#include <stdio.h>
    int main(){
        int i,j,k,flag=4;
        for(i=1; i<4; i++){
            for(j=0; j<i*flag; j++){
                printf("* ");
            }
            printf("\n");
            for(k=0; k<i*2 && i<4; k++){
                printf("*\n");
            }
        }

    }