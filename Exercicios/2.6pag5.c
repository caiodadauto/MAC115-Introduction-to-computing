#include<stdio.h>

int main () {

    int
        n,
        num,
        divisor,
        mult;

    printf ("Entre com um numero numero inteiro e positivo: ");
    scanf ("%d", &num); 
    n = num;
    for (divisor = 2; divisor < num; ++ divisor) {
        mult = 0;
        while (n % divisor == 0) {
            n = n / divisor;
            ++ mult;
        }
    if (mult != 0)
        printf ("\n%d tem multiĺicidade %d para %d\n", num, mult, divisor);
    }
    return 0;
}
