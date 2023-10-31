#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Distance{
        float inch;
        int feet;
    };
struct Distance addDistance(struct Distance d1,struct Distance d2){
    struct Distance sum;
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>12){
        sum.inch-=12;
        sum.feet++;
    }
    return sum;

}    ;

int main()
{   struct Distance dist1,dist2,sum;
    printf("Enter First Distance \n");
    printf("Feet :");
    scanf("%d",&dist1.feet);
    printf("Inches :");
    scanf("%f",&dist1.inch);

    printf("Enter Second Distnace \n");
    printf("Feet :");
    scanf("%d",&dist2.feet);
    printf("Inches :");
    scanf("%f",&dist2.inch);
    sum = addDistance(dist1, dist2);

    // Display the result
    printf("\nSum of distances = %d\'-%.2f\"", sum.feet, sum.inch);
    return 0;


}

