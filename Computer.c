/*

C
CO
COM
COMP
COMPU
COMPUT
COMPUTE
COMPUTER

*/


#include <stdio.h>
    int main(){
        int i,j;
        char a[10]="COMPUTER";

        for(i=0; i<8; i++){
            for(j=0; j<=i; j++){
                printf("%C",a[j]);
            }
            printf("\n");
        }

    }