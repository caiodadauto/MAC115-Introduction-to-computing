#include<stdio.h>

int main () {

    int
        i;
        
    float
        capital,
        juros,
        temp = 1,
        M;
        
    printf ("entre com o valor do capital: ");
    scanf ("%f", &capital);
    printf ("entre com a taxa de juros: ");
    scanf ("%f", &juros);

    for (i = 1; i <= 12; ++i) {
         temp *= (1 + ( juros/100 ));
    }
    M = capital * temp;
    
    printf ("o montante em um ano e %.2f\n", M);
    return 0;
}
