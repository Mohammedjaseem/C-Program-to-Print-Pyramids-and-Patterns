/*

* * *
* * *
*
* * * * * *
* * * * * *
*
*
* * * * * * * * *
* * * * * * * * *

*/

#include <stdio.h>
    int main(){
        int i,j,s,k;

        for(i=1; i<=3; i++){
            for(s=0; s<2; s++){
                for(k=0; k<i*3; k++){
                    printf("* ");
                    }
                    printf("\n");
            }
            
            for(j=0; j<i && i<3; j++ ){
                printf("* \n");
                }
        }
    }