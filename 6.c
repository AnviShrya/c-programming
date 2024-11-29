#include <stdio.h>
int main(){
    int marks[5];
    printf("enter 5 elements:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("array elements are:");
    for(int i=0; i<5; i++){
        printf("%d ",marks[i]);
    }
    return 0;

    
}