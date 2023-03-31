#include <stdio.h>

// Define the person structure
struct Person {
    char name[50];
    int age;
    char address[100];
};

int main() {
    struct Person people[3]; 
    
    for (int i = 0; i < 3; i++) {
        printf("Enter details for person %d:\n", i+1);
        printf("Name: ");
        scanf("%s", people[i].name);
        printf("Age: ");
        scanf("%d", &people[i].age);
        printf("Address: ");
        scanf("%s", people[i].address);
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i+1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Address: %s\n\n", people[i].address);
    }
    
    return 0;
}
