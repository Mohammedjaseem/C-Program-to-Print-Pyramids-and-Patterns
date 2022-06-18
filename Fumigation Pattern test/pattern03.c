/*

*
*
* * *
* *
* *
* * * * * *
* * *
* * *
* * *
* * * * * * * * *

*/

#include <stdio.h>
int main()
{
    int i,j,s;
	    for(i=1;i<=3;i++)
	    {
	        if(i==1)
	        {
	            printf("*\n");
	        }
	        for(j=1;j<=i;j++)
	        {
	            for(s=1;s<=i;s++)
	            {
	                printf("*");
	            }
	            printf("\n");
	        }
	        for(j=1;j<=i*3;j++)
	        {
	            printf("*");
	        }
	        printf("\n");
	    }
}         
           
    
