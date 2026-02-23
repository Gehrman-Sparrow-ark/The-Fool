#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <windows.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int first_num, last_num;

    printf("Enter the starting number: ");
    scanf("%d", &first_num);

    printf("Enter the ending number: ");
    scanf("%d", &last_num);

    printf("Prime numbers between %d and %d:\n", first_num, last_num);
    
    for (int i = first_num; i <= last_num; i++) {
        Sleep(100);
         if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}