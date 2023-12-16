#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for tasks
struct Task {
    char title[100];
    char description[200];
    int isCompleted;
};

// Function to add a task
void addTask(struct Task tasks[], int* taskCount, char* title, char* description);

// Function to view tasks
void viewTasks(struct Task tasks[], int taskCount);

// Function to mark a task as completed
void completeTask(struct Task tasks[], int taskCount, char* title);

// Function to delete a task
void deleteTask(struct Task tasks[], int* taskCount, char* title);

// Function to save tasks to a file
void saveTasksToFile(struct Task tasks[], int taskCount, char* filename);

// Function to load tasks from a file
void loadTasksFromFile(struct Task tasks[], int* taskCount, char* filename);

int main() {
    // Initialize an array to store tasks
    struct Task tasks[100];
    int taskCount = 0;

    // Load tasks from a file (if the file exists)
    loadTasksFromFile(tasks, &taskCount, "tasks.txt");

    int choice;
    do {
        // Display menu and get user choice
        printf("\nTo-Do List Manager\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Mark Task as Completed\n");
        printf("4. Delete Task\n");
        printf("5. Save and Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice) {
            case 1:
                // Add Task
                // Implement the addTask function
                break;
            case 2:
                // View Tasks
                // Implement the viewTasks function
                break;
            case 3:
                // Mark Task as Completed
                // Implement the completeTask function
                break;
            case 4:
                // Delete Task
                // Implement the deleteTask function
                break;
            case 5:
                // Save and Quit
                // Implement the saveTasksToFile function
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
