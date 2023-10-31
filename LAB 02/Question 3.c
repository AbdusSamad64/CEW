#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[]="Aadi";
    char str2[]="Samad";
    int iterations=0;
    int true_iterations=0;
    for(int i=0;i<5;i++){
        if(str1[i]==str2[i]){
            true_iterations++;
        }
        iterations++;
    }
    if(iterations==true_iterations){
        printf("The strings are identical");
    }
    else{
        printf("The strings are not identical");
    }

}

