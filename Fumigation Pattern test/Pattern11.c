/*

*
* *
*
*
*
* * * *
*
* * * * * *
*
*
*
* * * * * * * *

*/

#include<stdio.h>
    int main(){
        int i,j,k,flag=1;
        for(i=1; i<=4; i++){
            for(j=0; j<flag ; j++){
                printf("*\n");
            }
            for(k=0; k<i*2; k++){
                printf("* ");
            }
            printf("\n");
            if(flag==1){
                flag=3;
            }
            else if (flag==3){
                flag=1;
            }
        }
    }