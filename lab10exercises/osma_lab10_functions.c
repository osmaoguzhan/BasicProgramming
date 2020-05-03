#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "osma_lab10_h.h"

void getParticipant(struct Participant *participants,int numberOfParticipants){//ex3 b
    for(int i=0;i<numberOfParticipants;i++){
        printf("-------------------------------------------\n");
        fflush(stdin);
        printf("%d. Participant's Name:",i+1);
        fgets(participants[i].name, MAX, stdin);
        fflush(stdin);
        printf("%d. Participant's Surname:",i+1);
        fgets(participants[i].surname, MAX, stdin);
        fflush(stdin);
        printf("%d. Participant's First Task:",i+1);
        scanf("%d",&participants[i].task1);
        printf("%d. Participant's Second Task:",i+1);
        scanf("%d",&participants[i].task2);
        printf("%d. Participant's Third Task:",i+1);
        scanf("%d",&participants[i].task3);
        participants[i].sumOfPoints = participants[i].task1+participants[i].task2+participants[i].task3;
        removeEnter(participants[i].name);
        removeEnter(participants[i].surname);
        strcpy(participants[i].name ,toUpLowName(participants[i].name));
        strcpy(participants[i].surname,toUpperSurname(participants[i].surname));

    }
}
void displayParticipants(struct Participant *participants,int numberOfParticipants){//ex3 c
    for(int i=0;i<numberOfParticipants;i++)
        printf("%d.Participant  - Name: %s Surname :%s Task 1: %d Task 2 : %d Task 3 : %d Sum of Points : %d\n",
               i+1,
               participants[i].name,
               participants[i].surname,
               participants[i].task1,
               participants[i].task2,
               participants[i].task3,
               participants[i].sumOfPoints
               );
}

int checkParticipants(struct Participant *participants ,int numberOfParticipants){
    int howMany = 0;
    float arithmeticAverage= arithmeticAvg(participants,numberOfParticipants);
    for(int i=0;i<numberOfParticipants;i++){
        if(participants[i].sumOfPoints>=arithmeticAverage){
            howMany++;
        }
    }
    return howMany;
}
void passedParticipants(struct Participant *participants,struct Participant *passedParticipants,int numberOfParticipants){
    float arithmeticAverage= arithmeticAvg(participants,numberOfParticipants);
    for(int i=0,j=0;i<numberOfParticipants;i++){
        if(participants[i].sumOfPoints>=arithmeticAverage){
            strcpy(passedParticipants[j].name,participants[i].name);
            strcpy(passedParticipants[j].surname,participants[i].surname);
            passedParticipants[j].task1=participants[i].task1;
            passedParticipants[j].task2=participants[i].task2;
            passedParticipants[j].task3=participants[i].task3;
            passedParticipants[j].sumOfPoints=participants[i].sumOfPoints;
            j++;
        }
    }
}
float arithmeticAvg(struct Participant *participants,int numberOfParticipants){
    float arithmeticAverage = 0;
    for(int i=0;i<numberOfParticipants;i++){
        arithmeticAverage+=participants[i].sumOfPoints;
    }
    arithmeticAverage = arithmeticAverage/numberOfParticipants;
    return arithmeticAverage;
}
void saveToFile(struct Participant *passedParticipants,int howMany,FILE *fptr){
    fprintf(fptr,"PASSED PARTICIPANTS\n----------------------------------------------------\n");
    for(int i=0;i<howMany;i++)
        fprintf(fptr,"Name: %s Surname :%s Task1: %d Task2: %d Task3: %d Sum of Points: %d\n",
               passedParticipants[i].name,
               passedParticipants[i].surname,
               passedParticipants[i].task1,
               passedParticipants[i].task2,
               passedParticipants[i].task3,
               passedParticipants[i].sumOfPoints
               );
}
char *toUpperSurname(char *surname){

    for(int i=0;i<strlen(surname);i++){
        if((surname[i]>='a' && surname[i]<='z')){
            surname[i] = toupper(surname[i]);
        }
    }
    return surname;
}
char *toUpLowName(char *name){
    if(name[0]>='a' && name[0]<='z'){
        name[0] = toupper(name[0]);
    }
    for(int i=1;i<strlen(name);i++){
        if(!(name[i]>='a' && name[i]<='z')){
            name[i] = tolower(name[i]);
        }
    }
    return name;
}
void removeEnter(char *str) {
    int n=strlen(str);
    if(str[n-1]=='\n')
        str[n-1]='\0';
}
