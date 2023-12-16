#include <stdio.h>


struct Employee {
    int employeeID;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main() {
   
   
    struct Employee employee;

    printf("Enter Employee ID: ");
    scanf("%d", &employee.employeeID);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", employee.name);

    printf("Enter Employee Designation: ");
    scanf(" %[^\n]", employee.designation);

    printf("Enter Employee Department: ");
    scanf(" %[^\n]", employee.department);

    printf("Enter Employee Salary: ");
    scanf("%f", &employee.salary);

    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Name: %s\n", employee.name);
    printf("Designation: %s\n", employee.designation);
    printf("Department: %s\n", employee.department);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}
