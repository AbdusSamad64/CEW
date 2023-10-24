#include <stdio.h>
#include <stdlib.h>
//QUES 4

int decimal_to_binary(num)

{   if(num==0){
    return 0;
}
    if (num==1){
    return 1;
    }
    int decimal=num,binary=0,remainder=0,place=1;
    while(decimal)
        {
            remainder=decimal%2;
            decimal=decimal/2;
            binary=binary+(remainder*place);
            place=place*10;

        }
        return binary;
}

int main()
{   int num;
    printf("ENTER A NUMBER :");
    scanf("%d",&num);
    printf("BINARY EQUIVALENT :%d",decimal_to_binary(num));
    return 0;
}


