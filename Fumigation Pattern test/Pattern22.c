/*
X X
_ X X
X X
X X
_ _ X X X X
X X
X X
X X
_ _ _ X X X X X X X X
*/

#include<stdio.h>
int main(){
int i,j,k,n=2;
	for(k=1;k<=3;k++){
		for(i=1;i<=k;i++){
			for(j=1;j<=2;j++){
				printf("X ");
			}printf("\n");
		}
		for(j=1;j<=k;j++){
			printf("_ ");
		}
		for(j=1;j<=n;j++){
			printf("X ");
		}printf(" \n");
		n=n*2;
	}
}
