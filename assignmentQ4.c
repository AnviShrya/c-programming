//WAP to find the greatest number among three using switch statement.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    switch (a >= b && a >= c) {
        case 1:
            printf("The greatest number is: %d\n", a);
            break;
        default:
            switch (b >= c) {
                case 1:
                    printf("The greatest number is: %d\n", b);
                    break;
                default:
                    printf("The greatest number is: %d\n", c);
            }
    }

    return 0;
}
