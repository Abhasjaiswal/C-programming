#include <stdio.h>

struct Worker {
    int employeeID;
    char name[50];
    float hoursWorked;
    float hourlyRate;
};

int main() {
    struct Worker worker1, worker2;

// first worker
    printf("Enter details for Worker 1:\n");
    printf("Enter Employee ID: ");
    scanf("%d", &worker1.employeeID);
    printf("Enter Name: ");
    scanf(" %[^\n]", worker1.name);
    printf("Enter Hours Worked: ");
    scanf("%f", &worker1.hoursWorked);
    printf("Enter Hourly Rate: ");
    scanf("%f", &worker1.hourlyRate);

// second worker
    printf("\nEnter details for Worker 2:\n");
    printf("Enter Employee ID: ");
    scanf("%d", &worker2.employeeID);
    printf("Enter Name: ");
    scanf(" %[^\n]", worker2.name);
    printf("Enter Hours Worked: ");
    scanf("%f", &worker2.hoursWorked);
    printf("Enter Hourly Rate: ");
    scanf("%f", &worker2.hourlyRate);

    float totalPayment1 = worker1.hoursWorked * worker1.hourlyRate;
    float totalPayment2 = worker2.hoursWorked * worker2.hourlyRate;

    printf("\nTotal Payment for Worker 1 (%s): $%.2f\n", worker1.name, totalPayment1);
    printf("Total Payment for Worker 2 (%s): $%.2f\n", worker2.name, totalPayment2);

    return 0;
}
