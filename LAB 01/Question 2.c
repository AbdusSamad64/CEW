#include <stdio.h>
#include <stdlib.h>
//QUES 2


int main()
{
    float height,width;
    printf("ENTER HEIGHT OF RECTANGLE :");
    scanf("%f",&height);
    printf("ENTER WIDTH OF RECTANGLE :");
    scanf("%f",&width);
    printf("PERIMETER OF RECTANGLE = %.2f UNITS\n",(height+width)*2);
    printf("AREA OF RECTANGLE = %.2f SQUARE UNITS",height*width);
    return 0;
}
