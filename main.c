#include <stdio.h>
#include <stdlib.h>
#include "mUtils.h"

int main (void) {
    int number;
    system("cls");
    printf("Input your number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("Is prime.");
    } else {
        printf("Is not prime");
    }
    

    return 0;
}