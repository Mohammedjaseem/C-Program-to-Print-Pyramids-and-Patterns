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
        int i,j,k,m=1;
        for(i=0; i<6; i++){
            printf("* * * * \n");
            for(j=1; j<=m && i<5; j++){
                printf("* \n");
            }
            m=m+1;
        }
    }