#include <stdio.h>
#include <stdlib.h>
//QUES 1
int main()
{
   int emp_ID,hours_worked;
   float amount_per_hour;
   printf("ENTER EMPLOYEE ID :");
   scanf("%d",&emp_ID);
   printf("ENTER TOTAL WORKED HOURS IN A MONTH :");
   scanf("%d",&hours_worked);
   printf("ENTER THE AMOUNT RECIEVED PER HOUR :");
   scanf("%f",&amount_per_hour);
   printf("THE TOTAL SALARY OF EMPLOYEE HAVING ID = %d is %.2f",emp_ID,hours_worked*amount_per_hour);
    return 0;
}
