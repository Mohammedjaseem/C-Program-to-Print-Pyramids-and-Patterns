/*

* * * * * *
*

* * * * * *
*
*
* * * * * *
*
*
*
* * * * * *
*
*
*
*
* * * * * *

*/

#include <stdio.h>
    int main(){
        int i,j,k;

        for(i=1; i<=5; i++){
                for(k=0; k<6; k++){
                    printf("* ");
                }
                printf("\n");
                for(k=0; k<i && i!=5; k++){
                    printf("* \n");
                }
            }
            printf("\n");
        }


