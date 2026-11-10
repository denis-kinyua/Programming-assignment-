  #include <stdio.h>
  int main() {
      float height;
      double balance;
      char phone[20];

      printf("Enter your height in meters: ");
     scanf("%f", &height);

    printf("Enter your bank balance in KSh: ");
     scanf("%lf", &balance);

     printf("Enter your phone number: ");
    scanf("%19s", phone);

    printf("\nYour Details:\n");
   printf("Height: %.2f meters\n", height);
    printf("Bank Balance: KSh %.2f\n", balance);
     printf("Phone Number: %s\n", phone);

    return 0;
 }