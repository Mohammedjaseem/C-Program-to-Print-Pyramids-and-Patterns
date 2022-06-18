/* 

*     *
**   **
*** ***
*******
*** ***
**   **
*     *

*/

#include<stdio.h>
int main(){
    int i,j;

    for(i=0; i<7; i++){
     for(j=0; j<7; j++){

       if(i==0 || i==6){
            if(j==0 && j==6){
            printf("*");
            }
             else{
            printf(" ");
            }
            }
        
        else if(i==1 || i==6){
            if(j==0 || j==1 || j==5 || j==6){
              printf("*");
            }
             else{
            printf(" ");
            }
        }

        else if (i==2 || i==4){
            if(j==3){
                printf(" ");
            }
            else{
                printf("*");
            }
            }
        else{
            printf("*");
        }


    }
}
}