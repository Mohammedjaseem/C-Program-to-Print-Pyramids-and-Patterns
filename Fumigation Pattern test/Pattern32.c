/*

X
X X
X X X
X
X X
X X X
X X X X
X
X X
X X X
X X X X
X X X X X

*/

#include<stdio.h>
    int main(){
        int i,j,k,l;

        for(i=0; i<3; i++){
            for(j=1; j<i+4; j++){
                for(k=0; k<j; k++){
                    printf("X ");
                }
                printf("\n");
            }
        }
    }