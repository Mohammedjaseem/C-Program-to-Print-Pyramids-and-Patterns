/*

* * *
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

*/

#include <stdio.h>
    int main(){
        int i,j,k;

        for(i=1; i<=3; i++){
                for(j=0; j<2; j++){
                for(k=0; k<i*3; k++){
                    printf("* ");
                }
                
                printf("\n");
                }
                for(j=0; j<3 && i<3; j++){
                    printf("* \n");
                }
            }
        }


