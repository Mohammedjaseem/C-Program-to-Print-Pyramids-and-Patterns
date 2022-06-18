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

#include <stdio.h>
    int main(){
        int i,j,s,flag=1;{

            for(i=1; i<=4; i++ ){
                for(j=0; j<flag; j++){
                    printf("* \n");
                }
                
                if(flag==1){flag=3;}
                else if (flag==3){flag=1;}
               

                
                for(s=1; s<=i*2; s++){
                    printf("* ");
                }
            printf("\n");
            }
        }
    }