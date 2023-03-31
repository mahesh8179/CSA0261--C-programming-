#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    int age;
    float salary;
    char department[50];
};

void print_sales_employees(struct employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].department, "Sales") == 0 && employees[i].salary > 50000) {
            printf("Name: %s\nAge: %d\nSalary: %.2f\nDepartment: %s\n\n",
                employees[i].name, employees[i].age, employees[i].salary, employees[i].department);
        }
    }
}

int main() {
    struct employee employees[] = {
        {"John Smith", 28, 60000, "Sales"},
        {"Jane Doe", 35, 45000, "Marketing"},
        {"Bob Johnson", 42, 75000, "Sales"},
        {"Sarah Lee", 29, 55000, "Sales"},
        {"David Kim", 46, 85000, "Engineering"}
    };
    int n = sizeof(employees) / sizeof(employees[0]);
    
    print_sales_employees(employees, n);
    
    return 0;
}

