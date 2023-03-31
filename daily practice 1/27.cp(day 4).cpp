#include <stdio.h>

#define MAX_GRADES 10

struct student {
    char name[50];
    int id;
    float grades[MAX_GRADES];
    int num_grades;
};

int main() {
    struct student s;
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student ID number: ");
    scanf("%d", &s.id);
    printf("Enter number of grades (up to %d): ", MAX_GRADES);
    scanf("%d", &s.num_grades);
    printf("Enter grades:\n");
    float sum = 0;
    for (int i = 0; i < s.num_grades; i++) {
        scanf("%f", &s.grades[i]);
        sum += s.grades[i];
    }
    float average = sum / s.num_grades;
    printf("Student name: %s\n", s.name);
    printf("Student ID number: %d\n", s.id);
    printf("Average grade: %.2f\n", average);
    return 0;
}

