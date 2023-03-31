#include <stdio.h>
#include <string.h>

// Define the employee structure
struct Employee {
    char name[50];
    int age;
    float salary;
    char department[50];
};
void display_employees(struct Employee employees[], int num_employees) {
    for (int i = 0; i < num_employees; i++) {
        if (strcmp(employees[i].department, "Sales") == 0 && employees[i].salary > 50000.0) {
            printf("Name: %s, Age: %d, Salary: %.2f, Department: %s\n", employees[i].name, employees[i].age, employees[i].salary, employees[i].department);
        }
    }
}
struct Employee employees[] = {
    {"John", 30, 60000.0, "Sales"},
    {"Jane", 25, 45000.0, "Marketing"},
    {"Mike", 35, 75000.0, "Sales"},
    {"Lisa", 28, 55000.0, "Sales"},
    {"Tom", 40, 40000.0, "IT"}
};

int main() {
    int num_employees = sizeof(employees) / sizeof(struct Employee);
    display_employees(employees, num_employees);
    return 0;
}

