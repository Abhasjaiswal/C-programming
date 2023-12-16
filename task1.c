#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

// Function to print names of all students who joined in a particular year
void printStudentsByYear(struct Student students[], int numStudents, int targetYear) {
    printf("Students who joined in %d:\n", targetYear);
    for (int i = 0; i < numStudents; i++) {
        if (students[i].yearOfJoining == targetYear) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print the data of a student by roll number
void printStudentByRollNumber(struct Student students[], int numStudents, int rollNumber) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return; // Exit the loop once the student is found
        }
    }
    printf("Student with Roll Number %d not found.\n", rollNumber);
}

int main() {
    const int numStudents = 450; // Maximum number of students
    struct Student students[numStudents];

    // Input student data
    int numInputStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numInputStudents);

    if (numInputStudents > numStudents) {
        printf("Error: Too many students. Maximum allowed is %d\n", numStudents);
        return 1;
    }

    for (int i = 0; i < numInputStudents; i++) {
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Department: ");
        scanf("%s", students[i].department);
        printf("Enter Course: ");
        scanf("%s", students[i].course);
        printf("Enter Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }

   
    int targetYear, rollNumber;
    printf("Enter the target year to find students who joined: ");
    scanf("%d", &targetYear);
    printStudentsByYear(students, numInputStudents, targetYear);

    printf("Enter the roll number to find a student: ");
    scanf("%d", &rollNumber);
    printStudentByRollNumber(students, numInputStudents, rollNumber);

    return 0;
}
