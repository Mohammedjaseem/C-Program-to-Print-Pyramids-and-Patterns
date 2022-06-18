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

#include <stdio.h>
    int main(){
        int i,j,s,flag=1;

        for(i=1; i<=4; i++){

            for(j=0; j<flag; j++){
                printf("* \n");
            }
            if(flag==1){
                flag = 2;
            }
            else if(flag==2){
                flag = 1;
            }
            for(s=0; s<i*4 && i<3 ; s++){
                    printf("* ");
            }
            if(i==3){
                for(j=0; j<10 ; j++)
                printf("* ");
            }
            printf("\n");
        }
    }