#include <stdio.h>

int main() {
    int N;
    printf("Enter number of students: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        char regNum[20];
        char name[20];
        int marks;
        char grade;

        printf("\nEnter Reg No: ");
        scanf("%s", regNum);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Marks: ");
        scanf("%d", &marks);

        // Grade calculation
        if (marks >= 70) {
            grade = 'A';
        } else if (marks >= 60) {
            grade = 'B';
        } else if (marks >= 50) {
            grade = 'C';
        } else if (marks >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        // Display results
        printf("Reg No: %s | Name: %s | Marks: %d | Grade: %c | ", regNum, name, marks, grade);

        if (marks >= 40) {
            printf("Status: PASSED\n");
        } else {
            printf("Status: FAILED\n");
        }
    }

    return 0;
}
