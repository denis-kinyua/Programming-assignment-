
#include <stdio.h>

// Create a structure for employee details
struct Employee {
    char employeeID[20];
    char employeeName[50];
    char department[30];
    float basicSalary;
    float allowance;
};

// Function to calculate gross salary
float calculateGrossSalary(struct Employee emp) {

    return emp.basicSalary + emp.allowance;
}

int main() {

    // Declare an array for three employees
    struct Employee employees[3];

    int i;

    // Enter details of the three employees
    for (i = 0; i < 3; i++) {

        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%19s", employees[i].employeeID);

        printf("Enter Employee Name: ");
        scanf(" %49[^\n]", employees[i].employeeName);

        printf("Enter Department: ");
        scanf(" %29[^\n]", employees[i].department);

        printf("Enter Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);

        printf("Enter Allowance: ");
        scanf("%f", &employees[i].allowance);
    }

    // Display the employee payroll report
    printf("\n===============================================\n");
    printf("             EMPLOYEE PAYROLL REPORT\n");
    printf("===============================================\n");

    printf("%-10s %-18s %-12s %s\n",
           "ID", "Name", "Department", "Gross Salary (Ksh)");

    printf("---------------------------------------------------------------\n");

    // Display employee details and gross salary
    for (i = 0; i < 3; i++) {

        printf("%-10s %-18s %-12s %.2f\n",
               employees[i].employeeID,
               employees[i].employeeName,
               employees[i].department,
               calculateGrossSalary(employees[i]));
    }

    printf("===============================================\n");

    return 0;
}
