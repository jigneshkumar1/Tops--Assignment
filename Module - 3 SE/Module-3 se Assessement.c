//Create menu driven calculator using function
#include <stdio.h>
// Function declarations
void displayMenu();
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    do {
        // Display menu and get choice
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operations based on choice
        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0) {
                    printf("Error! Division by zero.\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5:
                printf("Exiting calculator.\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }

    } while (choice != 5);

    return 0;
}


void displayMenu() {
    printf("\n===== Calculator Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

