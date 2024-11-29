//WAP to take input of 5 subject marks and display the grade according to table Marks Average Grade >=90  A+ >=80 and <90 A >=70 and <80 B+ >=60 and <70 B >=50 and <60 C <50 Fail.


#include <stdio.h>

int main() {
    float marks[5], total = 0, average;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; 
    }

    average = total / 5;

    printf("\nAverage marks: %.2f\n", average);

    if (average >= 90)
        printf("Grade: A+\n");
    else if (average >= 80)
        printf("Grade: A\n");
    else if (average >= 70)
        printf("Grade: B+\n");
    else if (average >= 60)
        printf("Grade: B\n");
    else if (average >= 50)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
