#ifndef BLANK_H_INCLUDED
#define BLANK_H_INCLUDED
#define MAX 50
#include <stdio.h>
struct Participant{
    char name[MAX];
    char surname[MAX];
    int task1;
    int task2;
    int task3;
    int sumOfPoints;
};
void getParticipant(struct Participant *participants,int numberOfParticipants);
void displayParticipants(struct Participant *participants,int numberOfParticipants);
int checkParticipants(struct Participant *participants ,int numberOfParticipants);
float arithmeticAvg(struct Participant *participants,int numberOfParticipants);
void passedParticipants(struct Participant *participants,struct Participant *passedParticipants,int numberOfParticipants);
void saveToFile(struct Participant *passedParticipants,int howMany,FILE *fptr);
char *toUpLowName(char *name);
char *toUpperSurname(char *surname);
void removeEnter(char *str) ;
#endif // BLANK_H_INCLUDED
