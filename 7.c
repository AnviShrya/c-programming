//WAP TO DISPLAY ELEMENTS OF AN ARRAY IN REVERSE ORDER


#include <stdio.h>
int main(){
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int marks[n];
    printf("enter %d elements:",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("array elements are:");
    for(int i=n-1; i>=0; i--){
        printf("%d ",marks[i]);
    }
    return 0;
    
}                                                   