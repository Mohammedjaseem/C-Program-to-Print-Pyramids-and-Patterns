/*

X X X X
X X X
X
X
X X X
X X
X
X
X X
X

*/

#include<stdio.h>
    int main(){
        int i,j,k;
        for(i=1; i<=3; i++){
            for(j=4; j>=i; j--){
                printf("X ");
            }
            printf("\n");
            for(k=3; k>=i; k--){
                printf("X ");
            }
            printf("\n");
            for(j=2; j>0 &&i!=3; j--){
                printf("X \n");
            }
            if(i==3){
                printf("X");
                break;
            }
        }
    }

