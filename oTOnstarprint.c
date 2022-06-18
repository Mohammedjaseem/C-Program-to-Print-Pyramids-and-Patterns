/*

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * * * *
* * * * * * * * *
* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/


int main(void) {
	int i,j,limit;
	printf("Enter limit: ");
	scanf("%d",&limit);

	//Assending type
	for(i=0; i<limit; i++){
		for(j=0; j<i; j++){
			printf("* ");
		}
		printf("\n");
	}

	//desending type
	for(i=0; i<limit; i++){
		for(j=limit; j>i; j--){
			printf("* ");
		}
		printf("\n");
	}

	

	

}