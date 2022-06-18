/*

*
* * * *

*
*
* * * * * * * *

*
* * * * * * * * * *

*
*

*/

#include<stdio.h>
    int main(){
        int i,j,k,flag=1;
        for(i=1; i<=4; i++){
            for(j=0; j<flag; j++){
                printf("* \n");
            }
            if (flag==1){
                flag = 2;
                }
            else if (flag == 2){
                flag=1;
            }
            for(j=0; j<i*3 && i<4; j++ ){
                printf("* ");
            }
            printf("\n");


        }
    }