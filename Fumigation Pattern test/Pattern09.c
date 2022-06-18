/*

* *
*
* * * *
*
*
*
* * * * * * * *
*
*
*
*
*

*/

#include<stdio.h>
    int main(){
        int i,j,k,m,n,p=0;
        p=1;
        m=2;
        for(i=1; i<=4; i++){
            for(j=0; (j<i*m && i!=3); j++){
                printf("*");
            }
            if(i!=3){
            printf("\n");
            }
            for(j=0; ( j<p && i!=3); j++){
                printf("*\n");
             }
             if(i!=3){
             p=p+2;
             }
        }
    }