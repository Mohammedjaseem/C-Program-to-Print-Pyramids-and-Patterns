/*

* * * * *
*
* * * * * * * * * *
*
*
* * * * * * * * * * * * * * *
*
*
*
* * * * * * * * * * * * * * * * * * * *

*/

#include <stdio.h>
    int main(){
        int i,j,k;
        for(i=1; i<=4; i++){
            for(j=0; j<i*5; j++){
                printf("* ");
            }
            printf("\n");
            for(k=0; k<i && i<4; k++){
                printf("* \n");
            }
        }
    }