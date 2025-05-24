#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0;
    float percentage;

    printf("Enter marks of 5 students:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    percentage = (sum / 5.0);

    printf("Average percentage of 5 students: %.2f%%\n", percentage);

    return 0;
}