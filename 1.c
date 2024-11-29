//WAP TO DECLARE, INITIALIZE, INPUT, AND PRINT AN ARRAY

#include <stdio.h>
int main(){



    int numbers[5];
    printf("enter 5 numbers\n");
    for(int i=0;i<5;i++){
        printf("enter number for index %d",i);
        scanf("%d,&numbers[i]");
    }
    printf("\n the elements of thearray are:\n");
    for(int i=0;i<5;i++){
        printf("numbers[%d]=%d\n",i,numbers[i]);
    }
    return 0; 

}