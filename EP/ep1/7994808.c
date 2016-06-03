                /* ----------------------------------------------------------------
                 *
                 *                   Exercicío de Programa 1
                 *
                 *      Nome: Caio Vinícius Dadauto
                 *      Nº usp: 7994808
                 *      Curso: Física bacharelado
                 *-----------------------------------------------------------------*/

#include <stdio.h>

int main () {

    int
        base = 0,
        temp = 0,
        num_base = 0,
        decimal = 0,
        potencia,
        expoente,
        i;

    printf ("Entre com a base: ");
    scanf ("%d", &base);

    printf ("Entre com um numero na base %d: ", base);
    scanf ("%d", &num_base);

    expoente = 0;
    while (num_base != 0) {

        potencia = 1;
        for (i = 0; i < expoente; i = i + 1) {
            potencia = potencia * base;
        }

        temp = (num_base % 10) * potencia;
        expoente = expoente + 1;
        decimal = decimal + temp;
        num_base = num_base / 10;
    }

    printf ("O numero em base decimal e %d\n", decimal);

    return 0;
}
