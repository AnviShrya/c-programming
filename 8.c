//WAP TO FIND THE SUM OF ALL ELEMENTS OF ARRAY

#include <stdio.h>
int main(){
    int n, sum=0;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum= sum+arr[i];
    }
    printf("sum of array elements are: %d", sum);
    

    return 0;
    
}                                                   