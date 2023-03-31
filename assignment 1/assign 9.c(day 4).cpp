#include <stdio.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student myStudent;

    printf("Enter student name: ");
    scanf("%s", myStudent.name);

    printf("Enter student GPA: ");
    scanf("%f", &myStudent.gpa);

    printf("Student Name: %s\n", myStudent.name);
    printf("Student GPA: %.2f\n", myStudent.gpa);

    return 0;
}

