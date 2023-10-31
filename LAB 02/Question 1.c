#include <stdio.h>
#include <stdlib.h>


//FOR LOOP
int main()
{
    int n;
    int a=0;
    int sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("The first n odd natural numbers are:");
    for(int i=1;i<n+1;i++)
        {
            printf(" %d ",2*a+1);
            sum=sum+2*a+1;

            a++;

    }
    printf("\nThe sum of first n odd natural numbers is %d",sum);

//WHILE LOOP

int main()
{
    int n;
    int a=0;
    int sum=0;
    int i=1;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("The first n odd natural numbers are:");
    while(i<n+1)
        {
            printf(" %d ",2*a+1);
            sum=sum+2*a+1;
            a++;
            i++;

    }
    printf("\nThe sum of first n odd natural numbers is %d",sum);
}

// DO WHILE LOOP
int main()
{
    int n;
    int a=0;
    int sum=0;
    int i=1;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("The first n odd natural numbers are:");
    do
        {
            printf(" %d ",2*a+1);
            sum=sum+2*a+1;
            a++;
            i++;

    }while(i<n+1);
    printf("\nThe sum of first n odd natural numbers is %d",sum);
}



