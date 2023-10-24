#include <stdio.h>
#include <stdlib.h>
//QUES 3


int main()
{
    float height;
    printf("ENTER THE HEIGHT OF PERSON IN CM :");
    scanf("%f",&height);
    if(height<150){
        printf("THE PERSON IS DWARF");
    }
    else if(height==150){
        printf("THE PERSON IS AVERAGE");
    }
    else if(height>=165){
        printf("THE PERSON IS TALL");

    }
    return 0;
}

