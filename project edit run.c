//variable and data types 

#include<stdio.h>

int main(){
//declare and initialize variables
char grade;
char name[15];
int age;
float marks;
double pi;

printf("Enter your grade\t");
scanf("%c",&grade);

printf("Enter your name:\t");
scanf("%s",&name);

printf("Enter your age:\t");
scanf("%d",&age);

printf("Enter your marks:\t");
scanf("%f",&marks);

printf("Enter the value of pi:\t");
scanf("%lf",&pi);
printf("the grade is %c\n",grade);
printf("my name is %s\n",name);
printf("i am %d years old\n",age);
printf("i scored %.2f marks in kcse\n",marks);
printf("the value of pi is %.3lf\n",pi);


return 0 ;
}