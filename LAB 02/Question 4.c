#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[]=" I am Abdus Samad";

    for (int i=0;i<strlen(str);i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i]=str[i]-32;
            }
            else if(str[i]>='A' && str[i]<='Z'){

                str[i]=str[i]+32;
            }

    }
    printf("The string after modification is: %s",str);


}

