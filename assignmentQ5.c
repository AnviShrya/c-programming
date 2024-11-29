//Write a C program to find frequency of each digit in a given integer.

#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;  
        freq[digit]++;     
        num = num / 10;    
    }

    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("%d: %d\n", i, freq[i]);
        }
    }

    return 0;
}

