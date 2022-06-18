/*

* * *
*
*
*
* * * * * *
* * * * * *
*
*
*
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *

 */

#include <stdio.h>
    int main(){
        int i,j,s;
        for(i=1; i<=3; i++){
           for(s=0; s<i; s++){ 
            for(j=0; j<i*3; j++){
                printf("* ");
            }
            printf("\n");
            }

            for(s=0; s<3 && i<=2; s++){
                printf("* \n");
            }
        }
    }

