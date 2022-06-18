/*

* *
* * * * *
* *
* *
* * * * * * * * * *
* *
* *
* *
* * * * * * * * * * * * * * *
* *
* *
* *
* *

*/

#include<stdio.h>
int main(){
    int i,j,k;

    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            printf("* * \n");
        }
        for(k=1; k<i*5 && i<4; k++){
            printf("* ");
        }
        printf("\n");

    }
}