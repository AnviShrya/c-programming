//WAP TO PRINT TABLE OF UESR'S CHOICE


#include <stdio.h>

int main() {
    int num, i, limit;

   
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

   
    printf("Enter the limit for the multiplication table (default is 10): ");
    scanf("%d", &limit);

    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
