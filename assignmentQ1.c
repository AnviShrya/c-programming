//WAP to find the largest number among three using ternary operator.


#include <stdio.h>

int main() {
    int a, b, c, largest;

  
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    largest = (a > b && a > c) ? a : (b > c ? b : c);

   
    printf("The largest number is: %d\n", largest);

    return 0;
}
