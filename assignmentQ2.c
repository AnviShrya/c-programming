//WAP to check whether the given number is single digit, two digit , three digit or more the 3 digits.


#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= -9 && num <= 9) {
        printf("The number is a single digit.\n");
    } else if (num >= -99 && num <= 99) {
        printf("The number is a two digit number.\n");
    } else if (num >= -999 && num <= 999) {
        printf("The number is a three digit number.\n");
    } else {
        printf("The number has more than three digits.\n");
    }

    return 0;
}
