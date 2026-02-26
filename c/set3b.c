#include <stdio.h>

struct Employee {
    int empid;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[2];

    // Input employee details
    for(int i = 0; i < 2; i++) {
      
        printf("Employee ID: ");
        scanf("%d", &emp[i].empid);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);  // Read full name including spaces

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\n--- Employee Details ---\n");
    for(int i = 0; i < 2 ; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID: %d\n", emp[i].empid);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}