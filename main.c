#include <stdio.h>


int calculateFibunacciNumber(int x){

    if(x == 0 || x == 1){

        return x;
    }

    return calculateFibunacciNumber(x - 1) + calculateFibunacciNumber(x - 2);
}

int main() {

    int customerInput = 0;
    long fibunacciNumber = 0;

    printf("Please enter a number:\n");
    scanf("%ld", &customerInput);

    if(customerInput == 0){

        printf("Error: Input larger number than 0\n");

    } else if(customerInput < 0){

        printf("Error: Input a positive number\n");

    } else{

        fibunacciNumber = calculateFibunacciNumber(customerInput);
        printf("%ld\n", fibunacciNumber);

    }

    return 0;
}
