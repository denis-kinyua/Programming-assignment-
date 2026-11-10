
#include <stdio.h>

// Create a structure for vehicle details
struct Vehicle {
    char registrationNumber[20];
    char vehicleModel[30];
    char manufacturer[30];
    int yearOfManufacture;
    float dailyRentalCharge;
};

int main() {

    // Declare a vehicle variable
    struct Vehicle v;

    // Enter vehicle details
    printf("Enter Registration Number: ");
    scanf("%19s", v.registrationNumber);

    printf("Enter Vehicle Model: ");
    scanf(" %29[^\n]", v.vehicleModel);

    printf("Enter Manufacturer: ");
    scanf(" %29[^\n]", v.manufacturer);

    printf("Enter Year of Manufacture: ");
    scanf("%d", &v.yearOfManufacture);

    printf("Enter Daily Rental Charge: ");
    scanf("%f", &v.dailyRentalCharge);

    // Display vehicle registration report
    printf("\n================================\n");
    printf("       VEHICLE REGISTRATION REPORT\n");
    printf("================================\n");

    printf("Registration Number: %s\n", v.registrationNumber);
    printf("Vehicle Model: %s\n", v.vehicleModel);
    printf("Manufacturer: %s\n", v.manufacturer);
    printf("Year of Manufacture: %d\n", v.yearOfManufacture);
    printf("Daily Rental Fee: Ksh %.2f\n", v.dailyRentalCharge);

    printf("================================\n");

    return 0;
}
