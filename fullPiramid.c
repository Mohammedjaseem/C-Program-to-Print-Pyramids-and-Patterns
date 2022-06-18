/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *


*/

#include <stdio.h>
int main(){
    int i,j,k,limit;
    printf("Enter the limit");
    scanf("%d",&limit);

    for(i=0; i<limit; i++){
        for(k=limit; k>=i; k--){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    //revise the piramid
    for(i=limit; i>=0; i--){
        for(k=limit; k>=i; k--){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}