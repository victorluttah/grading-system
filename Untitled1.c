/*
  project :Ben's Factor Payroll
  Author: Victor Luttah
  Date: 22/09/2026
*/
#include<stdio.h>
#define RATE 500

    int main ()
{


    // variable declaration
    char employees_name[50];
    int employees_number;
    float hours_worked,normal_pay,overtime_pay,total_pay,tax_paid,net_pay;
    //capture inputs
    fgets(employees_name,sizeof(employees_name),stdin);
    printf("Enter Employees Number:");
    scanf("%d",&employees_number);
    printf("Enter Hours Worked:");
    scanf("%f",&hours_worked);

    //computations
    normal_pay = 40 * RATE;
    overtime_pay = (hours_worked - 40) *1.5 * RATE;
    total_pay = normal_pay + overtime_pay;
    tax_paid = 0.3 * total_pay;
    net_pay = total_pay - tax_paid;

    //output
    printf("Ben\'s Factory Payroll System\n");
    printf("==================================\n");
    printf("Employee name: %s\n",employees_name);
    printf("Normal pay: %f\n",normal_pay);
    printf("Overtime pay: %f\n",overtime_pay);
    printf("Tax paid: %f\n",tax_paid);
    printf("Net pay: %f\n",net_pay);
    printf("====================================\n");
    printf("Thank you, bye!\n");
    return 0;
}

