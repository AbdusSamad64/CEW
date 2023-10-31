#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int spaces=n-1;
    int stars=1;

    for (int iteration=1;iteration<n+1;iteration++){
        for (int i=spaces;i>=1;i--)
        {
            printf(" ");
        }
        for (int j=0;j<stars;j++){
            printf("* ");

        }
        stars++;
        spaces--;
        printf("\n");


    }
}

