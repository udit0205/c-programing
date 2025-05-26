#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Check if the number is even
    // and print the result
    // If the number is even, it will be divisible by 2
    // If the number is not even, it will not be divisible by 2
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is not even.\n", num);
    }

    return 0;
}