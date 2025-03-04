#include <stdio.h>
#include <string.h>

// Define a structure for Employee
struct Employee {
    int id;
    char name[50];
    char address[100];
    float salary;
};

// Function to sort employees by name in ascending order
void sortByName(struct Employee employees[], int n) {
    struct Employee temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(employees[j].name, employees[j + 1].name) > 0) {
                // Swap the employees if they are in the wrong order based on name
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

// Function to find and display the employee with the highest salary
void findHighestSalary(struct Employee employees[], int n) {
    int highest = 0;

    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[highest].salary) {
            highest = i;
        }
    }

    // Display the employee with highest salary
    printf("\nEmployee with highest salary:\n");
    printf("ID: %d\n", employees[highest].id);
    printf("Name: %s\n", employees[highest].name);
    printf("Address: %s\n", employees[highest].address);
    printf("Salary: %.2f\n", employees[highest].salary);
}

// Function to find and display the employee with the lowest salary
void findLowestSalary(struct Employee employees[], int n) {
    int lowest = 0;

    // Find the index of employee with lowest salary
    for (int i = 1; i < n; i++) {
        if (employees[i].salary < employees[lowest].salary) {
            lowest = i;
        }
    }

    // Display the employee with lowest salary
    printf("\nEmployee with lowest salary:\n");
    printf("ID: %d\n", employees[lowest].id);
    printf("Name: %s\n", employees[lowest].name);
    printf("Address: %s\n", employees[lowest].address);
    printf("Salary: %.2f\n", employees[lowest].salary);
}

int main() {
    int n;

    // Ask for the number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Declare an array of structures for n employees
    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter name: ");
        scanf("%s", employees[i].name);

        printf("Enter address: ");
        scanf("%s", employees[i].address);

        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Sort the employees by name
    sortByName(employees, n);

    // Display the sorted employee records
    printf("\nEmployee Records (sorted by name in ascending order):\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Address: %s\n", employees[i].address);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    // Find and display the highest salary employee
    findHighestSalary(employees, n);

    // Find and display the lowest salary employee
    findLowestSalary(employees, n);

    return 0;
}
