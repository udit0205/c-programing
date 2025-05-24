#include<stdio.h>
int main(){
    int a,b,result;
    int choice;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    printf("Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case 3:
            result = a * b;
            printf("Result: %d\n", result);
            break;
        case 4:
            if(b != 0) {
                result = a / b;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}