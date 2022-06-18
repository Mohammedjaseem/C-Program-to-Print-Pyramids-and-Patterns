/*

* *
* *
* * * *
* *
* *
* * * * * * * *
* *
* *
* * * * * * * * * * * *
* *
* *

*/

#include <stdio.h>
    int main(){
        int i,j,k,count=0;

        for(i=1; i<=4 ; i++){
                for(j=0; j<count*4 &&i!=1; j++){
                    printf("* ");
                }
                
                printf("\n");
                for(k=0; k<2; k++){
                    printf("* * \n");
                }
                count = count + 1;
            }
            
        }
    
