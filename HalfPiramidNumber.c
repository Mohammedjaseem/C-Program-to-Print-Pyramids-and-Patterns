/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <stdio.h>
int main(){
    int i,j,limit;
    printf("Enter the limit");
    scanf("%d",&limit);
    for(i=1; i<=limit; i++){
        for(j=1; j<=i; j++){
        printf("%d ",j);
    }
    printf("\n");
    }
    
}