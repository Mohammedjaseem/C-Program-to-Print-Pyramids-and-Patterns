/*

* * *
*
*
*
* * * * * *
*
*
*
*
*
*
* * * * * * * * *

*/

#include <stdio.h>
    int main(){
        int i,j,k;
        for(i=1; i<=3; i++){
            for(j=1; j<=i*3; j++){
                printf("* ");
            }
            printf("\n");
            for(k=0; (k<=i*3 && i*3<7); k++){
                printf("* \n");
            }
        }
    }