/*

*
* * * *
*
*
* * * * * * * *
*
*
*
* * * * * * * * * * * *

*/

#include<stdio.h>
    int main(){
        int i,j,k;
        for(i=1; i<=3; i++){
            for(k=1; k<=i; k++){
             printf("*\n");
            }
            for(j=1; j<=i; j++){
                printf("* * * * ");
            }
            printf("\n");
        }
    }