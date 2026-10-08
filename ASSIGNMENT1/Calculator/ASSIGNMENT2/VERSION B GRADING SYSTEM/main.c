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

        // Grade calculation using switch
        switch (marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }

        // Display results
        printf("Reg No: %s | Name: %s | Marks: %d | Grade: %c | ", regNum, name, marks, grade);

        switch (grade) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                printf("Status: PASSED\n");
                break;
            default:
                printf("Status: FAILED\n");
                break;
        }
    }

    return 0;
}
