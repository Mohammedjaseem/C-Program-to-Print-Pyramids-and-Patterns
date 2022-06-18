/*

* * * * *
*
*
*
* * * * * * * * * *
*
*
*
*
*
*
* * * * * * * * * * * * * * *

*/

#include <stdio.h>
int main(){
    int i,j,k,l;
    for(i=1; i<=3; i++){
        for(k=1; k<=i*5; k++){
            printf("* ");
        }
        printf("\n");
        for(j=1; (j<=i*3 && i*3<7); j++){
            printf("* \n");
        }
    }
}