#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 50
struct Student{
    char name[MAX];
    char surname[MAX];
    int yearOfBirth;
    int yearOfStudy;
    int totalECTS;
    float averageOfGrades;
};
void getStudent(struct Student *students,int numberOfStudents);
void saveStudents(struct Student *students,int numberOfStudents, FILE *fptr);
void removeEnter(char *str);
void delay(int number_of_seconds);
int main(){
    FILE *fptr;
    fptr = fopen("allStudents.txt","w");
    if (fptr == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have write privilege.\n");
        exit(EXIT_FAILURE);
    }
    int numberOfStudents;
    printf("How many student you want to add:");
    scanf("%d",&numberOfStudents);
    struct Student *students=malloc(numberOfStudents*sizeof(struct Student));
    printf("Type the informations about students\n");
    getStudent(students,numberOfStudents);
    saveStudents(students,numberOfStudents,fptr);
    free(students);
    fclose(fptr);
    return 0;
}

void getStudent(struct Student *students,int numberOfStudents){
    for(int i=0;i<numberOfStudents;i++){
        printf("-------------------------------------------\n");
        fflush(stdin);
        printf("%d. Student's Name:",i+1);
        fgets(students[i].name, MAX, stdin);
        fflush(stdin);
        printf("%d. Student's Surname:",i+1);
        fgets(students[i].surname, MAX, stdin);
        fflush(stdin);
        printf("%d. Student's Year Of Birth:",i+1);
        scanf("%d",&students[i].yearOfBirth);
        printf("%d. Student's Year Of Study:",i+1);
        scanf("%d",&students[i].yearOfStudy);
        printf("%d. Student's Total ECTS:",i+1);
        scanf("%d",&students[i].totalECTS);
        printf("%d. Student's Average of Grades:",i+1);
        scanf("%f",&students[i].averageOfGrades);
        removeEnter(students[i].name);
        removeEnter(students[i].surname);
    }
}
void saveStudents(struct Student *students,int numberOfStudents,FILE *fptr){
    printf("Saving to allStudents.txt file.");
    delay(1);
    printf("\rSaving to allStudents.txt file..");
    delay(1);
    printf("\rSaving to allStudents.txt file...");
    delay(1);
    for(int i=0;i<numberOfStudents;i++)
        fprintf(fptr,"Name: %s Surname :%s Year of Birth: %d Year of Study: %d Total ECTS: %d Average of Grades: %0.2f\n",
               students[i].name,
               students[i].surname,
               students[i].yearOfBirth,
               students[i].yearOfStudy,
               students[i].totalECTS,
               students[i].averageOfGrades
               );

}
void removeEnter(char *str) {
    int n=strlen(str);
    if(str[n-1]=='\n')
        str[n-1]='\0';
}

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds)
        ;
}

