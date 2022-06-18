/*

* * * * *
*
*
* * *
*
*
* * * * *
*
*
* * *
*
*
* * * * *

*/

#include <stdio.h>
    int main(){
        int i,j,k,flag=5;
        for(i=1; i<=5; i++){
            for(j=0; j<flag ; j++){
                printf("* ");
            }
            printf("\n");
            for(k=0; k<2 && i!=5; k++){
                printf("* \n");
            }
            if(flag==5){
                flag = 3;
            }
            else if (flag==3){
                flag = 5;
            }
        }
    }

