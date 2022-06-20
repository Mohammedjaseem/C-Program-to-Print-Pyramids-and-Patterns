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
        int i,j,k,m=2;;
        for(i=1; i<=4; i++){
            for(j=0; j<i && i!=4; j++){
                printf("X X \n");
            }
            for(k=0; k<i && i!=3; k++){
                printf("_ ");
            }
            for(j=0; (j<i*m && i!=3); j++){
                printf("X ");
            }
            printf("\n");
        }

    }
