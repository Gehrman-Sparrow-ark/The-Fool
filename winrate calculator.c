#include <stdio.h>
#include <string.h>
#include <math.h>

double user_matches();
double user_winrate();
double user_wins(double matches, double winrate);
double user_input();
void result(double matches, double goal, double wins);
void exit_or_restart();
int main(){
    double matches = user_matches();
    double winrate = user_winrate();
    double wins = user_wins(matches, winrate);
    double goal = user_input();
    result(matches, winrate, goal);
    exit_or_restart();
    return 0;
}
double user_matches(){
    double matches;
    printf("Enter the number of matches played: ");
    scanf("%lf", &matches);
    return matches;
}
double user_winrate(){
    double winrate;
    printf("Enter your current winrate: ");
    scanf("%lf", &winrate);
    return winrate / 100;
}
double user_wins(double matches, double winrate){
    return matches * winrate;
}
double user_input(){
    double percent;
    printf("Enter winrate you want to achieve: ");
    scanf("%lf", &percent);
    return percent / 100;
}
void result(double matches,double wins, double goal){
    double needed_matches = round((goal * matches - wins) / (1 - goal));
    printf("You need to win %.0lf more matches to achieve your goal.\n", needed_matches);
}
void exit_or_restart() {
    char choice[3];
    printf("Do you want to calculate again? (Y/N): ");
    scanf("%s", choice);
    if (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0) {
        main();
    } 
    else if (strcmp(choice, "N") == 0 || strcmp(choice, "n") == 0) {
        printf("Goodbye!\n");
    }
    else {
        printf("error: Invalid input. Please enter Y or N.\n");
        exit_or_restart();
    }
}