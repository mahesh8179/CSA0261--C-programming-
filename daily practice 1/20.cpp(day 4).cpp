#include <stdio.h>
#include <string.h>

union wage {
    float hourly;
    int cents_per_hour;
};

struct employee {
    char name[100];
    int id;
    union wage hourly_wage;
};

int main() {
    struct employee emp;
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter hourly wage as a float or an integer in cents: ");
    scanf("%f", &emp.hourly_wage.hourly);
    if (emp.hourly_wage.hourly < 1) {
        emp.hourly_wage.cents_per_hour = (int)(emp.hourly_wage.hourly * 100);
    }
    printf("\nEmployee information:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    if (emp.hourly_wage.cents_per_hour != 0) {
        printf("Hourly wage: %d cents\n", emp.hourly_wage.cents_per_hour);
    } else {
        printf("Hourly wage: %.2f dollars\n", emp.hourly_wage.hourly);
    }
    return 0;
}

