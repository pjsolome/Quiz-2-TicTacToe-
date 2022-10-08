#include <stdio.h>

//Globals
static char spaces[9];
static int currentPlayer = 1;
static int row;
static int column;

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

//Get status of board
void status(){
    
    printf("The current status is: \n \n");
    printf("    1   2   3\n");
    printf("  +-----------+ \n");
    printf("1 | %c | %c | %c |\n", spaces[0], spaces[1], spaces[2]);
    printf("  +-----------+ \n");
    printf("2 | %c | %c | %c |\n", spaces[3], spaces[4], spaces[5]);
    printf("  +-----------+ \n");
    printf("3 | %c | %c | %c |\n", spaces[6], spaces[7], spaces[8]);
}

// pvp make moves
void playerMove(){

    printf("Player %d: choose a row ", currentPlayer);
    fflush(stdout);
    scanf("%d", &row);
    printf("\nChoose a column ");
    fflush(stdout);
    scanf("%d", &column);

    if(currentPlayer == 1){
        if(row == 1 && column == 1){
            spaces[0] = 'X';
        }
    }
}

// pvc moves

// End of game and replay prompt

//Main
void main(){
    //initialize play spaces
    for(int i = 0; i < 9; i++){
        spaces[i] = ' ';
    }

    welcome();
    choose();
    status();
    playerMove();
    status();
}