#include <stdio.h>
int main(){
    int x=67;
    int *ptr=&x;
    *ptr =45;
    printf("x=%d",x);
    
   
    return 0;
}