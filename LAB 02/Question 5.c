#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int array[20],size,i,j;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    printf("Enter the values of array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++){
        for(j=0;j<i;j++){
            if(array[i]==array[j]){
                break;
            }
        }
        if(i==j){
            printf(" %d ",array[i]);
        }
    }


}



