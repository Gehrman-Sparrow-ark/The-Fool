#include <stdio.h>
#include <string.h>
#include <math.h>
int intput();
void check_num(int num);
void option();
int main(){
    int num = intput();
    check_num(num);
    option();
    return 0;
}
int intput(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
void check_num(int num){
    if (num > 0){
        printf("This is a positive number\n");
        if(num % 2 == 0){
            printf("This is an even number\n");
        }
        else{
            printf("This is an odd number\n");
        }
    }
    else if (num < 0){
        printf("This is a negative number\n");
    }
    else{
        printf("This is a zero\n");
    }
}
void option(){
    printf("Do you want to check another number (Y/n): ");
    char choice;
    scanf(" %c", &choice);
    if(choice == 'Y' || choice == 'y'){
        main();
    }
    else if(choice == 'N' || choice == 'n'){
        printf("This is the end\n");
    }
    else{
        printf("Invalid choice, please try again\n");
        option();
    }
}