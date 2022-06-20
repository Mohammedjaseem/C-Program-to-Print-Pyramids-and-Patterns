
/*
X X
_ X X
X X
X X
_ _ X X X X
X X
X X
X X
_ _ _ X X X X X X X X
*/

#include <stdio.h>
    int main(){
        int i,j,k;
        for(i=0; i<=3; i++){
            for(j=0; j<i; j++){
                printf("X X \n");
            }
            for(k=0; k<i; k++){
                printf("_ ");
            }
            for(j=1; j<=(i*2-2); j++){
                printf("X X ");
            }
            printf("\n");
        }

    }
