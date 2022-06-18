#include<stdio.h>
int main(){
    int i,j,k=0;

    for(i=0; i<3; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(k=0; k<i; k++){
            printf("X ");
        }
        printf("\n");

    }
    printf("\n");
    for(i=3; i>0; i--){
        for(j=1; j<i; j++){
            printf(" ");
        }
        for(k=0; k<j-1; k++){
            printf("X ");
        }
        printf("\n");

    }
}