Q) Write a program in C to print the following star pattern.

* * * * * * *
* *       * *
*   *   *   *
*     *     *
*   *   *   *
* *       * *
* * * * * * *


            #include <stdio.h>
            int main(){
                int i, j;
                for(i=0; i<7; i++){
                    if(i==0 || i==6){
                        for(j=0; j<7; j++){
                            printf("* ");
                        }
                        printf("\n");
                    }
                    else if(i==1 || i == 5){
                        for (j=0; j<7; j++){
                         if (j== 0 || j==1 || j==5 || j==6){
                             printf("* ");
                         }
                         else{
                             printf("  ");
                         }
                    }

                        printf("\n");
                    }

                    else if(i==2 || i == 4){ 
                       for (j=0; j<7; j++){
                         if (j%2 == 0){
                             printf("* ");
                         }
                         else{
                             printf("  ");
                         }
                    }
                        printf("\n");
                   } 
                    else if(i==3){
                        for(j=0; j<=12; j++){
                            if(j==0 || j == 6 || j==12){
                                printf("*");
                            }
                            else{
                                printf(" ");
                            }
                        }
                       printf("\n"); 
                            
                    }
                    
                    } 
            }
       
                       

          
