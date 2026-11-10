#include <stdio.h>

int main() {
    double balance, withdrawal;

    printf("Enter your account balance: ");
    scanf("%lf", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdrawal);

        balance = balance - withdrawal;

        printf("Remaining balance: KSh %.2f\n", balance);
    }

    printf("Account balance is zero or negative.\n");

    return 0;
}