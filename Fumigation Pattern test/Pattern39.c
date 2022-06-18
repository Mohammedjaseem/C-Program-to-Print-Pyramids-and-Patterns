/*

Q) Given a string. Find the length of the string. If the string length is odd print the
   following pattern.

   -- string length is odd --

            X       X
              X   X
                X
              X   X
            X       X


   -- If the string length is even --
                X      X
                 X    X
                  X X
                  X X
                 X    X
                X       X

String lenght - strlen(s) 




ANSWER
*/


#include <stdio.h>
#include <string.h>
    int main(){
        int i,j,k,len,count;
        char word[30];

        printf("Enter the string: ");
        scanf("%s",word);
        len = strlen(word);

    if(len%2==0){
        count=6;
    }
    else{
        count=5;
    }
       for(i=1;i<=count;i++){
		for(j=1;j<=count;j++){
			if(i==j||j==(count+1)-i){
				printf("X ");
			}else{
				printf("  ");
			}
		}
		printf(" \n");
	 }
 }

