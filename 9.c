


//WAP TO FIND THE SUM OF ALL ELEMENTS OF ARRAY

#include <stdio.h>
int main(){
    int n, sum=0;
    printf("enter array size:");
    scanf("%d",&n);
    int arr1[n], arr2[n];
    printf("enter %d elements:",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0; i<n; i++){
         arr2[i]=arr1[i];
    }
   
    printf("elements of array-1 are: \n );
    
    return 0;
    
}                                                   