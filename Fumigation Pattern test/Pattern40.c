/*

* * * * *
*
*
* * * * * * * * * *
*
*
*
*
* * * * *
*
*
*
*
*
*
*
*
* * * * * * * * * *

*/

#include<stdio.h>
    int main(){
        int i,j,k,flag=5;

        for(i=1; i<=4; i++){
            for(j=0; j<flag; j++){
                printf("* ");
            }
            if(flag==5){
                flag= 10;
            }
            else if(flag==10){
                flag= 5;
            }
            printf("\n");
            for(k=0; k<i*2 && i<3; k++){
                printf("* \n");
            }
            if(i==3){
                for(k=0; k<8; k++){
                    printf("* \n");
                }
            }

        }
    }