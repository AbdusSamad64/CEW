
#include <stdio.h>
#include <stdlib.h>

int main()
{   //Writing
    FILE*file1=fopen("greetings.txt","w");
    if(file1==NULL)
        {
            perror("Error in opening file.");
        }
    fprintf(file1,"Hello\n");
    printf("Text has been sucessfully written in the file.\n");
    fclose(file1);

    //Reading
    FILE*file2=fopen("greetings.txt","r");
    if(file2==NULL)
        {
            perror("Error in opening file.");
        }
    char line1[5000];
    printf("Read from the file:\n");
    while(fgets(line1,sizeof(line1),file2)!=NULL)
        {
            printf("%s",line1);
        }
    fclose(file2);

    //Append
    FILE*file3=fopen("greetings.txt","a");
    if(file3==NULL)
        {
            perror("Error in opening file.");
        }
    fprintf(file3,"My name is Abdus Samad.\nCS-22077");
    printf("Text has been appended to the file.\n");
    fclose(file3);


    //Reading
    FILE*file4=fopen("greetings.txt","r");
    if(file2==NULL)
        {
            perror("Error in opening file.");
        }
    char line2[5000];
    printf("Read from the file:\n");
    while(fgets(line2,sizeof(line2),file2)!=NULL)
        {
            printf("%s",line2);
        }
    fclose(file4);

}

