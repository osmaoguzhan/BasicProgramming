#include "osma_lab10_h.h"
#include "osma_lab10_functions.c"

int main(){
    FILE *fptr;
    fptr = fopen("passedParticipants.txt","w");
    if (fptr == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have write privilege.\n");
        exit(EXIT_FAILURE);
    }
    int numberOfParticipants;
    printf("How many participants you want to add:");
    scanf("%d",&numberOfParticipants);
    struct Participant *participants=malloc(numberOfParticipants*sizeof(struct Participant));//ex3 a
    getParticipant(participants,numberOfParticipants);
    printf("------------------------------------------------------\n");
    printf("ALL PARTICIPANTS:\n");
    printf("------------------------------------------------------\n");
    displayParticipants(participants,numberOfParticipants);
    int howMany = checkParticipants(participants,numberOfParticipants);
    if(howMany!=0){
        struct Participant newParticipants[howMany];
        passedParticipants(participants,newParticipants,numberOfParticipants);
        printf("------------------------------------------------------\n");
        printf("PASSED PARTICIPANTS:\n");
        printf("------------------------------------------------------\n");
        displayParticipants(newParticipants,howMany);
        saveToFile(newParticipants,howMany,fptr);
    }
    free(participants);
    fclose(fptr);
    return 0;
}





