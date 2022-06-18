Q) Write a program in C to print the following star pattern.


        * *

        *

        *

        *

        * * * *

        *

        *

        *

        *

        *

        *

        * * * * * *

Ans)



            #include <stdio.h>
                int main(){
                    int i, j;
                    for(i=0; i<12; i++){
                        if(i==0){
                            for(j=0; j<2; j++){
                                printf("* ");
                            }
                            printf("\n");
                        }
                        
                        else if(i==4){
                            for(j=0; j<4; j++){
                                printf("* ");
                            }
                            printf("\n");
                        }
                        
                        else if(i==11){
                            for(j=0; j<7; j++){
                                printf("* ");
                            }
                            printf("\n");
                        }
                        
                        else{
                            printf("* \n");
                        }
                    }
                }