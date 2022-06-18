/*

X X X X

X X X

X
X
X

X X X
X X

X
X
X

X X
X

*/


#include <stdio.h>
    int main(){
        int i,j,k,l;
        for(i=1; i<=3; i++){
            for(j=0; j<5-i; j++){
                printf("X ");
            }
            printf("\n");
            for(k=0; k<5-(i+1); k++){
                printf("X ");
            }
            printf("\n");

            if(i==3){
                for(l=1; l<1; l++){
                printf("X \n");
            }
            }
            else if(i!=3){
            for(l=0; l<3; l++){
                printf("X \n");
            }
            }
        }
    }