#include <stdio.h>
#include <stdlib.h>

// creating student structure
struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    int n;

    // Asking for the number of students
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }

    // Allocating dynamic memory for an array of students
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read each student's information
    for (int i = 0; i < n; i++) {
        printf("Enter data for student %d: ", i + 1);
        if (scanf("%49s %d %f", students[i].name, &students[i].id, &students[i].grade) != 3) {
            printf("Invalid input.\n");
            free(students); // if error clear memory
            return 1;
        }
    }

    // Leave one blank line
    printf("\n");

    // Print table header
    printf("%-6s %-11s %s\n", "ID", "Name", "Grade");

    // Print all student data
    for (int i = 0; i < n; i++) {
        printf("%-6d %-11s %.1f\n", students[i].id, students[i].name, students[i].grade);
    }

    // Clearing memory
    free(students);

    return 0;
}