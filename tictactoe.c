#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <stdbool.h>

//Globals
static char spaces[9];
static int currentPlayer;
static int row;
static int column;
static int choice;
static char playAgain = 'Y';
static bool gameOver = false;

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

fflush(stdout);
scanf("%d", &choice);

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
        } else if(row == 1 && column == 2){
            spaces[1] = 'X';
        } else if(row == 1 && column == 3){
            spaces[2] = 'X';
        } else if(row == 2 && column == 1){
            spaces[3] = 'X';
        } else if(row == 2 && column == 2){
            spaces[4] = 'X';
        } else if(row == 2 && column == 3){
            spaces[5] = 'X';
        }else if(row == 3 && column == 1){
            spaces[6] = 'X';
        }else if(row == 3 && column == 2){
            spaces[7] = 'X';
        } else if(row == 3 && column == 3){
            spaces[8] = 'X';
        }
    }

    if(currentPlayer == 2){
        if(row == 1 && column == 1){
            spaces[0] = 'O';
        } else if(row == 1 && column == 2){
            spaces[1] = 'O';
        } else if(row == 1 && column == 3){
            spaces[2] = 'O';
        } else if(row == 2 && column == 1){
            spaces[3] = 'O';
        } else if(row == 2 && column == 2){
            spaces[4] = 'O';
        } else if(row == 2 && column == 3){
            spaces[5] = 'O';
        }else if(row == 3 && column == 1){
            spaces[6] = 'O';
        }else if(row == 3 && column == 2){
            spaces[7] = 'O';
        } else if(row == 3 && column == 3){
            spaces[8] = 'O';
        }
    }
}

// pvc moves
void computerMove(){
    int randomNum;
    time_t t;

     /* Init random number generator */ 
    srand((unsigned) time(&t)); 

    /* Generate a random number 0 to 8 */
    randomNum = rand() % 9;

    if(spaces[randomNum] == ' '){
        spaces[randomNum] = 'O';
    }
}

// Check for tictactoe
 void checkEnd(){
    if(spaces[0] == spaces[1] && spaces[0] == spaces[2]){
        if(spaces[0] == 'X'){
            gameOver = true;
            printf("Player 1 wins\n\n");
        } else if(spaces[0] == 'O'){
            gameOver = true;
            printf("Player 2 wins\n\n");
        } else if(spaces[0] == ' '){
            gameOver = false;
        }
    } else if(spaces[3] == spaces[4] && spaces[3] == spaces[5]){
        if(spaces[3] == 'X'){
            gameOver = true;
            printf("Player 1 wins\n\n");
        } else if(spaces[3] == 'O'){
            gameOver = true;
            printf("Player 2 wins\n\n");
        } else if(spaces[3] == ' '){
            gameOver = false;
        }
    } else if(spaces[6] == spaces[7] && spaces[6] == spaces[8]){
        if(spaces[6] == 'X'){
            gameOver = true;
            printf("Player 1 wins\n\n");
        } else if(spaces[6] == 'O'){
            gameOver = true;
            printf("Player 2 wins\n\n");
        } else if(spaces[6] == ' '){
            gameOver = false;
        }
    } else if(spaces[0] == spaces[3] && spaces[0] == spaces[6]){
        if(spaces[0] == 'X'){
            gameOver = true;
            printf("Player 1 wins\n\n");
        } else if(spaces[0] == 'O'){
            gameOver = true;
            printf("Player 2 wins\n\n");
        } else if(spaces[0] == ' '){
            gameOver = false;
        }
    } else if(spaces[1] == spaces[4] && spaces[1] == spaces[7]){
        if(spaces[1] == 'X'){
            gameOver = true;
            printf("Player 1 wins\n\n");
        } else if(spaces[1] == 'O'){
            gameOver = true;
            printf("Player 2 wins\n\n");
        } else if(spaces[1] == ' '){
            gameOver = false;
        }
    } else if(spaces[2] == spaces[5] && spaces[2] == spaces[8]){
        if(spaces[2] == 'X'){
            gameOver = true;
            printf("Player 1 wins\n\n");
        } else if(spaces[2] == 'O'){
            gameOver = true;
            printf("Player 2 wins\n\n");
        } else if(spaces[2] == ' '){
            gameOver = false;
        }
    } else if(spaces[0] == spaces[4] && spaces[0] == spaces[8]){
        if(spaces[0] == 'X'){
            gameOver = true;
            printf("Player 1 wins\n\n");
        } else if(spaces[0] == 'O'){
            gameOver = true;
            printf("Player 2 wins\n\n");
        } else if(spaces[0] == ' '){
            gameOver = false;
        }
    } else if(spaces[2] == spaces[4] && spaces[2] == spaces[6]){
        if(spaces[2] == 'X'){
            gameOver = true;
            printf("Player 1 wins\n\n");
        } else if(spaces[2] == 'O'){
            gameOver = true;
            printf("Player 2 wins\n\n");
        } else if(spaces[2] == ' '){
            gameOver = false;
        }
    }
}

//Ask for replay
void replay(){
    printf("Play again? (Y/N): ");
    fflush(stdout);
    scanf("%c", playAgain);
}

//Main
void main(){
//keeps track of number of moves
int move = 0;

    //initialize play spaces
    for(int i = 0; i < 9; i++){
        spaces[i] = ' ';
    }
    
    while(playAgain == 'Y' || playAgain == 'y'){
        welcome();
        choose();
        if(choice == 1){
            printf("\n\nYou have entered choice 1\n\n");
            while(gameOver == false){
                status();
                if(move == 0 || move % 2 == 0){
                    currentPlayer = 1;
                    playerMove();
                    checkEnd();
                    move++;
                } else {
                    currentPlayer = 2;
                    playerMove();
                    checkEnd();
                    move++;
                }
            }
        } else if(choice == 2) {
            printf("You have entered choice 2\n\n");
            while(gameOver = false){
                currentPlayer = 1;
                playerMove();
                checkEnd();
                computerMove();
                checkEnd();
            }
        } else {
            printf("Try again");
        }
        replay();
    }
}