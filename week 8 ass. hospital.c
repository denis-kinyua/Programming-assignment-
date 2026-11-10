
#include <stdio.h>

// Create a structure for patient details
struct Patient {
    char patientID[20];
    char patientName[50];
    int age;
    char gender[15];
    char diagnosis[50];
    int daysAdmitted;
};

int main() {

    // Declare a patient variable
    struct Patient p;

    // Ask the user to enter patient details
    printf("Enter Patient ID: ");
    scanf("%19s", p.patientID);

    printf("Enter Patient Name: ");
    scanf(" %49[^\n]", p.patientName);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Gender: ");
    scanf("%14s", p.gender);

    printf("Enter Diagnosis: ");
    scanf(" %49[^\n]", p.diagnosis);

    printf("Enter Number of Days Admitted: ");
    scanf("%d", &p.daysAdmitted);

    // Display the patient admission report
    printf("\n================================\n");
    printf("      PATIENT ADMISSION REPORT\n");
    printf("================================\n");

    printf("Patient ID: %s\n", p.patientID);
    printf("Patient Name: %s\n", p.patientName);
    printf("Age: %d\n", p.age);
    printf("Gender: %s\n", p.gender);
    printf("Diagnosis: %s\n", p.diagnosis);
    printf("Days Admitted: %d\n", p.daysAdmitted);

    printf("================================\n");

    return 0;
}
