Q) Write a program in C to print the following star pattern.


    X X

    _ X X

    X X

    X X

    _ _ X X X X

    X X

    X X

    X X

    _ _ _ X X X X X X X X




                             #include <stdio.h>
                int main(){
                    int i, j, underscore_count, x_count;
                    for(i=0; i<9; i++){
                        if(i == 1 || i ==4 || i==8){
                            for(j=0; j<i+1; j++){
                                    x_count = i;
                                    underscore_count = (i)/2;
                                    if (i==1){
                                        x_count = i+1;
                                        underscore_count = i;
                                    }
                                    else if (i==8){
                                        underscore_count = (i-1)/2;
                                    }
                                    for(j=0; j<underscore_count; j++){
                                        printf("_ ");
                                    }
                                    for(j=0; j<x_count; j++){
                                        printf("X ");
                                    }
                                    printf("\n");
                            }
                        }
                        else{
                            printf("X X");
                            printf("\n");
                        }
                    }

                }

                }