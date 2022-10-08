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
if(choice <=2){
printf("You have entered choice %d \n \n", choice);
} else {
    printf("Please choose 1 or 2");
}

}

//Get status of board
void status(){
    static char spaces[9];

    //initialize play spaces
    for(int i = 0; i < 9; i++){
        spaces[i] = ' ';
    }

    printf("The current status is: \n \n");
    printf("    1   2   3\n");
    printf("  +-----------+ \n");
    printf("A | %c | %c | %c |\n", spaces[0], spaces[1], spaces[2]);
    printf("  +-----------+ \n");
    printf("B | %c | %c | %c |\n", spaces[3], spaces[4], spaces[5]);
    printf("  +-----------+ \n");
    printf("C | %c | %c | %c |\n", spaces[6], spaces[7], spaces[8]);
}

// pvp make moves

// pvc moves

// End of game and replay prompt

//Main
void main(){
    welcome();
    choose();
    status();
}