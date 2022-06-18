/*

* * *
*
* * * * * *
* 
*
* * * * * * 
*
*
*

*/

#include <stdio.h>
    int main(){
        int i,j,k,m=1;
        for(i=0; i<3; i++){
            for(j=0; j<m; j++){
                printf("* * * ");
            }
            printf("\n");
            for(k=0; k<m; k++){
                printf("* \n");
            }
            m=m+1;
        }
        
    }