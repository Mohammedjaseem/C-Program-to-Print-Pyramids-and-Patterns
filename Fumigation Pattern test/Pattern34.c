/*

*
*
* * *

* *
* *
* * * * * *

* * *
* * *
* * * * * * * * *

*/

#include <stdio.h>
    int main(){
        int i,j,k;
        for(i=1; i<=3; i++){
            for(k=0; k<i; k++){
                printf("* ");
            }
            printf("\n");
            for(j=0; j<i; j++){
                printf("* ");
            }
            printf("\n");
            for(k=0; k<i*3; k++){
                printf("* ");
            }
            printf("\n");
        }
    }