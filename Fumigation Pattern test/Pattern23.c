/*

X X X X _ _
_ X X X X
X
X X X _ _
_ X X X
X
X
X X _ _
_ X X
X
X
X
X _ _
_ X
X
X
X
X

*/

#include <stdio.h>
    int main(){
        int i,j,k,s;
        for(i=1; i<=4; i++){
                for(k=5-i; k>0; k--){
                    printf("X ");
                }
                for(s=0; s<2; s++){
                    printf("_ ");
                }
                printf("\n");
                printf("_");

                for(j=4; j>=i; j--){
                    printf("X ");
                }

                printf("\n");
                for(k=0; k<i; k++){
                    printf("X \n");
                }
            }
      
    }

