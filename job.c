#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
//guess section
typedef struct {
    int tries;
    int guess;
    int random_num;
    int min;
    int max;
}guessGame;
int min(guessGame userin);
int max(guessGame userin);
int random_num(guessGame userin);
void limit(guessGame userin);
int main(){
    guessGame userin = {0,0,0,0,0};
    srand(time(NULL));
    printf("***This a guessing number game***\n");
    userin.min = min(userin);
    userin.max = max(userin);
    userin.random_num = random_num(userin);
    limit(userin);

    
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
    return 0;  
}

int min(guessGame userin){
    printf("Which  minium number from you want guess: ");
    scanf("%d", &userin.min);
    return userin.min;
}
int max(guessGame userin){
    printf("To which number: ");
    scanf("%d", &userin.max);
    return userin.max;
}
int random_num(guessGame userin){
    int random_num = (rand() % (userin.max - userin.min + 1)) + userin.min;
    return random_num;
}
void limit(guessGame userin){
    if (abs(userin.max - userin.min) > 100){
            printf("The range shouldn't be more than 100\n");
            limit(userin);
    }   
    else if (userin.max <= userin.min){
            printf("The max should be bigger than min\n");
            limit(userin);
        }
    else {
        return;
    }
}
