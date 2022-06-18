/*

* * * * *
*
*
* * * * * * * * * *
*
*
*
*
* * * * * * * * * * * * * * *
*
*
*
*
*
*

*/


#include <stdio.h>
    int main(){
        int i,j,k,m;
        m=5;
        for(i=1; i<=3; i++){
            for(j=1; j<=i*m; j++){
                printf("* ");
            }
            printf("\n");
            for(k=0; k<i*2; k++){
                printf("*\n");
            }
        }
    }