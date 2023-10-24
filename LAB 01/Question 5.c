#include<stdio.h>
#include<stdlib.h>
//QUES 5

int fibonacci_series(num)
{   int x=1,y=1,z,n=num;
    int i;
    printf(" %d "" %d ",x,y);
    for(i=3;i<n+1;i++){
        z=x+y;
        x=y;
        y=z;
        printf(" %d ",z);
        }

}

int main()
{   int n;
    printf("ENTER NTH TERM OF FIBONACCI SERIES :");
    scanf("%d",&n);
    fibonacci_series(n);


}

