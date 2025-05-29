#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float numbers[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    avg = sum / n;
    printf("Average = %.2f\n", avg);

    return 0;
}