/*

1 
2* 2
3* 3* 3
4* 4* 4* 4
4* 4* 4* 4
3* 3* 3
2* 2
1 

*/
#include <stdio.h>
int main(){
    int i,j,k;
    for(i=1; i<=4; i++){
        if(i!=1){
            for(j=1; j<=i*2-1; j++ ){
                if(j%2==0){
                    printf("* ");
                }
                else{
                    printf("%d",i);
                }
            }
            printf("\n");
        }
        else{
            printf("1 \n");
        }
    }
    for(i=4; i>=1; i--){
        if(i!=1){
            for(j=1; j<=i*2-1; j++ ){
                if(j%2==0){
                    printf("* ");
                }
                else{
                    printf("%d",i);
                }
            }
            printf("\n");
        }
        else{
            printf("1 \n");
        }
    }
}
