#include <stdio.h>

// Global variable with static storage class
static int globalStaticVariable = 10;

// Global variable with extern storage class
extern int globalExternVariable;

// Function with auto storage class
void autoStorageClassDemo() {
    auto int localAutoVariable = 20; // Local variable with auto storage class

    printf("Auto Storage Class Demo:\n");
    printf("Local auto variable: %d\n", localAutoVariable);
}

// Function with register storage class
void registerStorageClassDemo() {
    register int localRegisterVariable = 30; // Local variable with register storage class

    printf("Register Storage Class Demo:\n");
    printf("Local register variable: %d\n", localRegisterVariable);
}

// Function with static storage class
void staticStorageClassDemo() {
    static int localStaticVariable = 40; // Local variable with static storage class

    printf("Static Storage Class Demo:\n");
    printf("Local static variable: %d\n", localStaticVariable);
}

// Function with extern storage class
void externStorageClassDemo() {
    printf("Extern Storage Class Demo:\n");
    printf("Global extern variable: %d\n", globalExternVariable);
}

int main() {
    int choice;
    globalExternVariable = 50;

    do {
        printf("\nMenu:\n");
        printf("1. Auto Storage Class\n");
        printf("2. Register Storage Class\n");
        printf("3. Static Storage Class\n");
        printf("4. Extern Storage Class\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                autoStorageClassDemo();
                break;
            case 2:
                registerStorageClassDemo();
                break;
            case 3:
                staticStorageClassDemo();
                break;
            case 4:
                externStorageClassDemo();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
