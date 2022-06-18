/*

*
* * * *
*
*
* * * * * * * *
*
* * * * * * * * * *
*
*

*/

#include <stdio.h>
    int main(){
        int i,j,k;
        for(i=i; i<=2; i++){
            for(j=0; j<i; j++){
                printf("* \n");
            }
            for(k=0; k<i; k++){
                printf("* * * * ");
            }
            printf("\n");
        }
        printf("* \n");
        for(i=0; i<1; i++){
            for(j=0; j<10; j++){
                printf("* ");
            }
            printf("\n*\n*");
        }
    }