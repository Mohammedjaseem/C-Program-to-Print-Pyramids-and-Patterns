/*
"    *    "
"   ***   "
"  *****  "
" ******* "
"*********"
*/

#include<stdio.h>
    int main(){
        int i,j,k;
        for(i=1; i<=5; i++){
            for(j=0; j<10; j++){
                if(j==0 ){
                    printf("''");
                }
            }
            for(k=5; k>i; k--){
                printf(" ");
            }

            for(j=1; j<=2*i-1; j++){
                printf("*");
                }
            
            for(k=5; k>i; k--){
                printf(" ");
            }
            for(j=1; j<=10; j++){
                if(j==10){
                    printf("''");
                }
            }
              printf("\n");  
            }
            
        }
    