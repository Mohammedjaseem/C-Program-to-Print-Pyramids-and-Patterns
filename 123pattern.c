/*

1 
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5
1 2 3
1

*/

#include<stdio.h>
int main(){
    int i,j,k;
    // 1st loop
    for(i=1; i<=4; i++){
        if(i!=1){
        for(j=1; j<=i*2-1; j++){
            printf("%d ",j);
        }
        printf("\n");
        }
        else{
            printf("1 ");
            printf("\n");
        }
    }
    for(i=3; i>=1; i--){
        if(i!=1){
        for(j=1; j<=i*2-1; j++){
            printf("%d ",j);
        }
        printf("\n");
        }
        else{
            printf("1 ");
        }
    }
}