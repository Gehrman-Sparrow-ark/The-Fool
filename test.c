#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <unistd.h>
// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int first_num = 0;
    int last_num = 0;

    printf("Enter the starting number: ");
    scanf("%d", &first_num);

    printf("Enter the ending number: ");
    scanf("%d", &last_num);

    printf("Prime numbers between %d and %d:\n", first_num, last_num);
    for (int i = first_num; i <= last_num; i++) {
        usleep(100000); // Sleep for 100 milliseconds
        if (isPrime(i)) {
            tri
            printf("%d", i);
            if (i % 10 == 0){
                    printf("\n");
            }   
        }
    }  

    return 0;
}