#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
void displayStudents(struct Student *students,int numberOfStudents);
int findBest(struct Student *students,int numberOfStudents);
void removeEnter(char *str);
void displayAllGlobals(struct Student *students,int numberOfStudents);

int main(){
    int numberOfStudents;
    printf("How many student you want to add:");
    scanf("%d",&numberOfStudents);
    struct Student *students=malloc(numberOfStudents*sizeof(struct Student));//a
    printf("Type the informations about students\n");
    getStudent(students,numberOfStudents);
    displayStudents(students,numberOfStudents);
    int bestStudent=findBest(students,numberOfStudents);
    printf("----------------------------------------------------\n");
     printf("\nBest Student:\nName: %s|Surname :%s|Year of Birth: %d|Year of Study: %d|Total ECTS: %d|Average of Grades: %0.2f|\n",
               students[bestStudent].name,
               students[bestStudent].surname,
               students[bestStudent].yearOfBirth,
               students[bestStudent].yearOfStudy,
               students[bestStudent].totalECTS,
               students[bestStudent].averageOfGrades
               );
    displayAllGlobals(students,numberOfStudents);
    free(students);
    return 0;
}

void getStudent(struct Student *students,int numberOfStudents){//b
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
void displayStudents(struct Student *students,int numberOfStudents){//c
    printf("------------------------------------------------------\n");
    printf("ALL STUDENTS:\n");
    printf("------------------------------------------------------\n");
    for(int i=0;i<numberOfStudents;i++)
        printf("%d.Student  - Name: %s Surname :%s Year of Birth: %d Year of Study: %d Total ECTS: %d Average of Grades: %0.2f\n",
               i+1,
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

int findBest(struct Student *students,int numberOfStudents){//d
    float gradeForBest = (students[0].averageOfGrades*students[0].totalECTS)/students[0].yearOfStudy;
    int temp = 0;
    for(int i=1;i<numberOfStudents;i++){
        if((students[i].averageOfGrades*students[0].totalECTS)/students[i].yearOfStudy>gradeForBest){
            gradeForBest = (students[i].averageOfGrades*students[0].totalECTS)/students[i].yearOfStudy;
            temp=i;
        }
    }
    return temp;
}
void displayAllGlobals(struct Student *students,int numberOfStudents){//e
    printf("----------------------------------------------\n");
    float globalAverage=0;
    for(int i=0;i<numberOfStudents;i++){
            globalAverage+=students[i].averageOfGrades;
    }
    printf("GLOBAL AVERAGE OF ALL STUDENTS IS %0.2f",globalAverage/numberOfStudents);
    printf("----------------------------------------------\n");
}
