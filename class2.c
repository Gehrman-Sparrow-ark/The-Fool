#include <stdio.h>
#include <math.h>
int input_num1();
char input_op();
int input_num2();
void calculate(int num1, char op, int num2);
void choice();
int main(){
    int num1 = input_num1();
    char op = input_op();
    int num2 = input_num2();
    calculate(num1, op, num2);
    choice();
    return 0;
   
}
int input_num1(){
    int num1;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    return num1;
}
char input_op(){
    char op;
    printf("Enter the operator: ");
    scanf(" %c", &op);
    return op;
}
int input_num2(){
    int num2;
    printf("Enter the second number: ");
    scanf("%d", &num2);
    return num2;
}
void calculate(int num1, char op, int num2){
    switch (op)
    {
    case '+':
        printf("The result is: %d\n", num1 + num2);
        break;
    case '-':
        printf("The result is: %d\n", num1 - num2);
        break;
    case '*':
        printf("The result is: %d\n", num1 * num2);
        break;
    case '/':
        if(num2 != 0){
            printf("The result is: %d\n", num1 / num2);
        }
        else{
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    case 5:
        printf("The result is: %.2f\n", pow(num1, num2));
        break;
    
    default:
        printf("Invalid operator.\n");
        break;
    }
    
}
void choice(){
    char choice;
    printf("Do you want to perform another calculation? (y/n): ");
    scanf(" %c", &choice);
    if(choice == 'y' || choice == 'Y'){
        main();
    }
    else if(choice == 'n' || choice == 'N'){
        printf("Goodbye!\n");
    }
    else{
        printf("Goodbye!\n");
    }
}

