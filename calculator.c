
#include <stdio.h>            
int main() {
    int choice;
    double num1, num2, result;
    do {
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 5)
    break;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    switch (choice) {
    case 1:
    result = num1 + num2;
    printf("Result: %.2lf\n", result);
    break;
    case 2:
    result = num1 - num2;
    printf("Result: %.2lf\n", result);
    break;
    case 3:
    result = num1 * num2;
    printf("Result: %.2lf\n", result);
    break;
    case 4:
    if (num2 != 0) {
    result = num1 / num2;
    printf("Result: %.2lf\n", result);
    } else {
    printf("Error! Division by zero.\n");
    }
    break;
    default:
    printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }
    } while (1);
    printf("Exiting the calculator. Goodbye!\n");

    return 0;
}