#include <stdio.h>

// Welcome Screen
void welcome(){
printf("=========================== \n \n");
printf("WELCOME TO TIC TAC TOE! \n \n");
printf("1 -- person vs person \n \n");
printf("2 -- person vs random computer \n \n");
printf("Enter your choice (1 or 2): ");
}

// Choose pvp vs pvc
void choose(){
static int choice;

fflush(stdout);
scanf("%d", &choice);

printf("=========================== \n \n");
printf("You have entered choice %d \n \n", choice);
}

// Show status of board

// pvp make moves

// pvc moves

// End of game and replay prompt

//Main
void main(){
    welcome();
    choose();
}