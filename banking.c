#include <stdio.h>
#include <math.h>

void checkBalance(double balance);
double deposit(double balance);
double withdraw(double balance);
int main(){
    double balance = 0.0;
    int choice;
    printf("***Welcome to the Bank***\n");
    do{
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for banking with us!\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while(choice != 4);


}
void checkBalance(double balance){
    printf("Your current balance is: $%.2f\n", balance);
}
double deposit(double balance){
    double amount;
    printf("Enter the amount to deposit: ");
    scanf("%lf", &amount);
    if(amount > 0){
        balance += amount;
        printf("Deposit successful. New balance: $%.2f\n", balance);
    }
    else if(amount <= 0){
        printf("I think you want to withdraw\n");
        printf("So go to the withdraw section\n");
    } else {
        printf("Invalid deposit amount.\n");
    }
    return balance;
}
double withdraw(double balance){
    double amount;
    printf("Enter the amount to withdraw: ");
    scanf("%lf", &amount);
    if(amount > 0 && amount <= balance){
        balance -= amount;
        printf("Withdrawal successful. New balance: $%.2f\n", balance);
    } else if(amount > balance){
        printf("Insufficient funds. Your current balance is: $%.2f\n", balance);
    } else if(amount <= 0){
        printf("I think you want to deposit\n");
        printf("So go to the deposit section\n");
    } else {
        printf("Invalid withdrawal amount.\n");
    }
    return balance;
}