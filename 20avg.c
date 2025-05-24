#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    avg = sum / n;

    printf("Average of first %d natural numbers is: %.2f\n", n, avg);

    return 0;
}