/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****

*/

#include <stdio.h>
int main(){
    int i,j,k;

    for(i=1; i<=5; i++){
        for(j=8; j>=i; j--){
            printf("*");
        }
        for(k=0; k<i; k++){
            if(k==i){
                printf("%d",i);
                
            }
            else{
                printf("*%d",i);
            }
        }
        for(j=8; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }
}