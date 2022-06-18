/*

* *
* *
* * * * *

* *
* *
* * * * * * * * * *

* *
* *
* * * * * * * * * * * * * * *

*/

#include <stdio.h>
    int main(){
        int i,j,k;
        for (i=1; i<=3; i++){
            for(j=0; j<2; j++){
                printf("* * \n");
            }
            for(k=0; k<=i*5; k++){
                printf("* ");
            }
            printf("\n");
        }
    }

