/*

* * * * * * * *
*           *
*         *
*       *
*     *
*   *
* *
*

*/

#include <stdio.h>
 int main(){
     int i,j;
         for (i=1; i<=10; i++){
            for(j=10; j>=i; j--){
                if(j==10 || i==1 || j==i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }

            }
            printf("\n");
         }
 }

        