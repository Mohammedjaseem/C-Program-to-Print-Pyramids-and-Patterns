/*
1 2 3 4 5
  2 4 6 8
    3 6 9
      4 8
        5
*/

#include <stdio.h>
 int main(){
    int i,j,k,num,add;
    num=0;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("  ");
        }
        num = i;
        add = 1;
        for(j=5; j>=i; j--){
            printf("%d ",i*add);
            num=num+1;
            add=add+1;
        }
        printf("\n");

    }
 }