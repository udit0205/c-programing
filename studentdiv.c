#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float percentage;
    char division[20];

    printf("Enter marks for 5 subjects (out of 100):\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    if (percentage >= 60)
        sprintf(division, "First Division");
    else if (percentage >= 45)
        sprintf(division, "Second Division");
    else if (percentage >= 33)
        sprintf(division, "Third Division");
    else
        sprintf(division, "Fail");

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %s\n", division);

    return 0;
}