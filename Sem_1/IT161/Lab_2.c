/* Problem:
Ramesh’s basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary and house rent allowance is 20% of basic salary.
Write an algorithm, flowchart and program to calculate his gross salary. */

#include <stdio.h>
int main()
{
//Declaring the float variables
float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

//Asking the user for input
printf("Hello Ramesh! Please tell your basic salary\n");
scanf("%f", &basic_salary);

//Computing the value of other variables
dearness_allowance = 0.4*basic_salary;
house_rent_allowance=0.2*basic_salary;
gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

//Final presentation of data, while rounding the float values up to 2 decimals.
printf("---------------------------------------------------------------\n");
printf("Your basic salary is: %0.2f\n", basic_salary);
printf("Your dearness allowance for given basic salary is: %0.2f\n", dearness_allowance);
printf("Your house rent allowance for given basic salary is: %0.2f\n\n", house_rent_allowance);
printf("Hence, your gross salary is: %0.2f\n", gross_salary);
printf("---------------------------------------------------------------");

return 0;
}