#include <stdio.h>
#include <stdlib.h>

int main(){
    int NoOFwords=0;
    //Creating a Dummy file.
    FILE*file=fopen("words.txt","w");
    if (file==NULL){
        printf("Error in opening the file");
        return 1;
    }
    fprintf(file,"Hello I am Abdus Samad.\nI am undergraduate student in NED.\nMy Roll no is CS-22077.");
    fclose(file);
    //Reading word from the file.
    FILE*file1=fopen("words.txt","r");
    if(file1==NULL){
       printf("Error in opening the file");
       return 1;
       }

    char word[5000];
    while(fscanf(file1,"%99s",word)==1){
        //printf("%s",word);
        NoOFwords++;

    }

    printf("Total no of words :%d ",NoOFwords);
    fclose(file1);
    return 0;
}



