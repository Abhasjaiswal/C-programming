#include <stdio.h>
#include <string.h>

struct Customer {
    int accountNumber;
    char name[50];
    double balance;
};

const int MAX_CUSTOMERS = 200;

// Function to print account number and name of customers with balance below Rs. 100
void printCustomersWithLowBalance(struct Customer customers[], int numCustomers) {
    printf("Customers with balance below Rs. 100:\n");
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 100.0) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

// Function to perform deposit (code = 1) or withdrawal (code = 0) for a customer
void performTransaction(struct Customer customers[], int numCustomers, int accountNumber, double amount, int code) {
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accountNumber) {
            if (code == 1) { 
                customers[i].balance += amount;
                printf("Deposit of Rs. %.2lf successful. New balance: Rs. %.2lf\n", amount, customers[i].balance);
            } else if (code == 0) { 
                if (customers[i].balance - amount < 1000.0) {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                } else {
                    customers[i].balance -= amount;
                    printf("Withdrawal of Rs. %.2lf successful. New balance: Rs. %.2lf\n", amount, customers[i].balance);
                }
            } else {
                printf("Invalid transaction code. Use 0 for withdrawal and 1 for deposit.\n");
            }
            return;
        }
    }
    printf("Customer with Account Number %d not found.\n", accountNumber);
}


int main() {
    struct Customer customers[MAX_CUSTOMERS];
    int numCustomers;

    // Input customer data
    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);

    if (numCustomers > MAX_CUSTOMERS) {
        printf("Error: Too many customers. Maximum allowed is %d\n", MAX_CUSTOMERS);
        return 1;
    }

    for (int i = 0; i < numCustomers; i++) {
        printf("Enter Account Number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Enter Name: ");
        scanf("%s", customers[i].name);
        printf("Enter Balance: ");
        scanf("%lf", &customers[i].balance);
    }


    printCustomersWithLowBalance(customers, numCustomers);

    int accountNumber, code;
    double amount;
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);
    printf("Enter Amount: ");
    scanf("%lf", &amount);
    printf("Enter Transaction Code (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);
    performTransaction(customers, numCustomers, accountNumber, amount, code);

    return 0;
}
