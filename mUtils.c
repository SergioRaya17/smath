#include <stdio.h>
#include <math.h>

/*
    Author: Sergio Raya
    Date: 09/11/2023
    Version: 1.0
*/ 

int isPrime (int n) {
    if (n <= 1) {
        return 0;
    } else if (n <= 3) {
        return 1;
    } else if (n % 2 == 0) {
        return 0;
    } else {
        int contador = 3;
        double limite = sqrt(n);
        while (contador <= limite && n % contador != 0) {
            contador += 2;
        }
        if (contador > limite) {
            return 1;
        } else {
            return 0;
        }
    }
}