/*

* * * *
* *
* * * * * * * *
* *
* * * * * * * * * * * *
* *
* * * * * * * * * * * * * * * *

*/

#include <stdio.h>
    int main(){
        int i,j,k;

        for(i=1; i<=4; i++){
            for(j=0; j<i*4; j++){
                printf("* ");
            }
            printf("\n");
            if(i!=4){
                for(j=0; j<2; j++){
                    printf("* ");
                }
            }
            printf("\n");
        }
    }