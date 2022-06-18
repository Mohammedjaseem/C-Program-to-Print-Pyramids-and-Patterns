/*

* * *
*
* * * * * *
*
*
* * * * * * * * *
*
*
*

*/

#include <stdio.h>
    int main(){
        int i,j,k,count=1;
    for(i=1; i<4; i++){
        for(j=0; j<i; j++){
            printf("* * * ");
        }
        printf("\n");
        for(k=0; (k<count && count<4); k++){
                printf("* \n");
        }
        count = count+1;
    }

    }

