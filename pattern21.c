#include <stdio.h>
    int main(){
        int i,j,k,p,m=1;
        for(i=0; i<3; i++){
            for(j=0; j<m; j++){
                if(j<m){
                    for(p=0; p<m; p++)
                    printf("* ");
                }
                printf("\n");
            }
            for(k=0; k<m; k++){
                printf("* * * ");
            }
            printf("\n");
            m=m+1;
        }
        
    }