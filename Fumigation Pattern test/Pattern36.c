/*

* * * *
* *

* * * * * * * *
* *

* * * * * * * * * * * *
* *

* * * * * * * * * * * * * * * *



*/

#include<stdio.h>
    int main(){
        int i,j,k,l;

        for(i=1; i<=4; i++){
            for(j=1; j<=i*4; j++){
                printf("* ");
            }
            printf("\n");
            if(i!=4){
            for(k=0; k<2; k++){
                printf("* ");
            }
            }
            printf("\n");
        }
    }