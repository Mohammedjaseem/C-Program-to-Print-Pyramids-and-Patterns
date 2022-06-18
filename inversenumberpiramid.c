/*

1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1


*/

#include <stdio.h>
int main(){
    int i,j,limit;
    printf("Enter the limit");
    scanf("%d",&limit);
    
    for(i=limit; i>1; i--){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}