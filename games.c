#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
//guess section
struct guessGame{
    int tries;
    int guess;
    int random_num;
    int min;
    int max;
};
//rockpaperscissor section
int getComoputerchoice();
int getUserchoice();
void checkWinner(int checkUser,int checkComputar);

int main(){
    int choice = 0;

    printf("***This is game section***\n");
    printf("1.Guess the number\n");
    printf("2.Rock Paper Scissors\n");
    printf("Choose which game to play: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("***This a guessing number game***\n");
        struct guessGame userin = {0,0,0,0,0};
        srand(time(NULL));

        do{
        printf("Which  minium number from you want guess: ");
        scanf("%d", &userin.min);
        printf("To which number: ");
        scanf("%d", &userin.max);
        userin.random_num = (rand() % (userin.max - userin.min + 1)) + userin.min;
        if(abs(userin.max - userin.min) > 100){
        printf("There is a limit\n");
        }
        }while(abs(userin.max - userin.min) > 100);
    
        do{
        printf("Type your guess: ");
        scanf("%d", &userin.guess);
        userin.tries++;
        if(userin.guess > userin.max || userin.guess < userin.min){
        printf("This is the limit\n");
        }
        else if(userin.random_num > userin.guess && abs(userin.random_num - userin.guess) >= 50){
        printf("The guess is too low\n");
        }
        else if(userin.random_num > userin.guess && abs(userin.random_num - userin.guess) >= 25){
        printf("The guess is little bit low\n");
        }
        else if(userin.random_num > userin.guess && abs(userin.random_num - userin.guess) >= 10){
        printf("You are close a bit higher\n");
        }
        else if(userin.random_num > userin.guess && abs(userin.guess - userin.random_num) > 5){
        printf("You are super close a bit lower\n");
        }
        else if(userin.random_num > userin.guess && abs(userin.random_num - userin.guess) <= 5){
        printf("You are super duper close a bit higher\n");
        }
        else if(userin.guess > userin.random_num && abs(userin.guess - userin.random_num) >= 50){
        printf("The guess is too high\n");
        }
        else if(userin.guess > userin.random_num && abs(userin.guess - userin.random_num) >= 25){
        printf("The guess is little bit high\n");
        }
        else if(userin.guess > userin.random_num && abs(userin.guess - userin.random_num) >= 10){
        printf("You are close a bit lower\n");
        }
        else if(userin.guess > userin.random_num && abs(userin.guess - userin.random_num) > 5){
        printf("You are super close a bit lower\n");
        }
        else if(userin.guess > userin.random_num && abs(userin.guess - userin.random_num) <= 5){
        printf("You are super duper close a bit lower\n");
        }
        }while(userin.guess != userin.random_num);

        printf("You have guessed it\n");
        printf("Its number %d\n", userin.random_num);
        printf("It took you %d tries",userin.tries);

        break;

        case 2:
        srand(time(NULL));
        char choicec = '\0';
        do{
        printf("***Rock Paper Scissors Game***\n");
    
        int checkUser = getUserchoice();
        int checkComputar = getComoputerchoice();

        switch(checkUser){
        case 1:
        printf("You choose rock\n");
        break;

        case 2:
        printf("You choose paper\n");
        break;

        case 3:
        printf("You choose scissor\n");
        break;
        }
       switch(checkComputar){
        case 1:
        printf("Computar choose rock\n");
        break;

        case 2:
        printf("Computar choose paper\n");
        break;

        case 3:
        printf("Computar choose scissor\n");
        break;
        }
        checkWinner(checkUser,checkComputar);
        printf("\nDo you want to exit the game (Y/n): ");
        scanf(" %c", &choicec);
        }while(choicec == 'N' || choicec == 'n');
        printf("\nThis is the end\n");

        break;
    }
    return 0;

}
int getComoputerchoice(){
    return (rand() % 3 ) + 1;    
}
int getUserchoice(){
    int choice = 0;
    do{
    printf("1.rock\n");
    printf("2.paper\n");
    printf("3.scissor\n");
    printf("Choose an option: ");
    scanf("%d", &choice);
    if(choice < 1 || choice > 3){
    printf("choose the right option\n");
    }
    }while(choice < 1 || choice > 3);
}
void checkWinner(int checkUser,int checkComputar){
      
    if((checkUser == 1 && checkComputar == 3) || (checkUser == 2 && checkComputar == 1) || (checkUser == 3 && checkComputar == 2) ){
        printf("You win the game!");
    }
    else if((checkUser == 1 && checkComputar == 2) || (checkUser == 2 && checkComputar == 3) || (checkUser == 3 && checkComputar == 1)){
        printf("You lose the game!");
    }
    else{
        printf("Its a draw!");
    }
}
