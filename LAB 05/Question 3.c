#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

// Structure to represent a student record
typedef struct {
    char name[MAX_NAME_LENGTH];
    int rollNumber;
    float marks;
} Student;

// Function to add a student record to the file
void addStudentToFile(const char *fileName, const Student *student) {
    FILE*file=fopen(fileName,"a");
    if(file==NULL){
        perror("Error in opening file");
        return 1;
    }
    fprintf(file,"%s %d %.2f\n",student->name,student->rollNumber,student->marks);
    fclose(file);
}

// Function to display the current student records from the file
void displayStudentRecords(const char *fileName) {
    FILE*file=fopen(fileName,"r");
    if(file==NULL){
        perror("Error in opening file");
        return 1;
    }
    Student student;
    while(fscanf(file,"%s %d %f",student.name,&student.rollNumber,&student.marks)==3){
            printf("Name : %s,Roll Number : %d,Marks : %.2f\n",student.name,student.rollNumber,student.marks);

    }

    //char line[5000];
    //while(fgets(line,sizeof(line),file)!=NULL){
      //  printf("%s",line);
    //}

    fclose(file);


}
void delStudentRecords(const char *fileName,int rollNo){
    FILE*file1=fopen(fileName,"r");
    if(file1==NULL){
        printf("Error in opening the file.");
        return 1;
    }
    FILE*tempfile=fopen("temp.txt","w");
    if(tempfile==NULL){
        printf("Error in opening the file.");
        return 1;
    }
    Student student;
    while(fscanf(file1,"%s %d %f",student.name,&student.rollNumber,&student.marks)==3){
            if(student.rollNumber!=rollNo){
                fprintf(tempfile,"%s %d %.2f\n",student.name,student.rollNumber,student.marks);
            }

    }
    fclose(file1);
    fclose(tempfile);
    remove(fileName);
    rename("temp.txt", fileName);
    printf("Student record with Roll Number %d deleted successfully.\n", rollNo);
}
void modifyStudentRecord(const char *fileName,int rollNo){
    FILE*file=fopen(fileName,"r");
    if(file==NULL){
       printf("Error in opening the file");
       return 1;
    }
    FILE*tempfile=fopen("modify.txt","w");
    if(tempfile==NULL){
       printf("Error in opening the file");
       return 1;
    }
    Student student;
    while(fscanf(file,"%s %d %f",student.name,&student.rollNumber,&student.marks)==3){
            if(student.rollNumber!=rollNo){
                fprintf(tempfile,"%s %d %.2f\n",student.name,student.rollNumber,student.marks);
            }else{
            printf("Enter new student name: ");
            scanf("%s", student.name);
            printf("Enter new student marks: ");
            scanf("%f", &student.marks);
            fprintf(tempfile,"%s %d %.2f\n",student.name,student.rollNumber,student.marks);
            }

    }
    fclose(file);
    fclose(tempfile);
    remove(fileName);
    rename("modify.txt", fileName);
    printf("Student record with Roll Number %d modified successfully.\n", rollNo);

}




int main() {
    const char *fileName = "students.txt";
    Student student;
    int choice;
    int rolltodlt;
    int rolltomodify;

    do {
        printf("\nStudent Record Management\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Delete Record\n");
        printf("4. Modify Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student name: ");
                scanf("%s", student.name);
                printf("Enter student roll number: ");
                scanf("%d",&student.rollNumber);
                printf("Enter student marks: ");
                scanf("%f",&student.marks);

                addStudentToFile(fileName,&student);
                printf("Student record added.\n");
                break;

            case 2:
                displayStudentRecords(fileName);
                break;
            case 3:

                printf("Enter roll number of student to delete :");
                scanf("%d",&rolltodlt);
                delStudentRecords(fileName,rolltodlt);
                break;
            case 4:
                printf("Enter roll number of student to modify :");
                scanf("%d",&rolltomodify);
                modifyStudentRecord(fileName,rolltomodify);
                break;

            case 5:
                printf("Exiting program.\n");
                break;


            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}

