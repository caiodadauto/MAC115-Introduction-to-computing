                /*----------------------------------------------------------------
                 *                 Exercicío de Programa 2
                 *
                 *                 Nome: Caio Vinícius Dadauto
                 *                 Nº usp: 7994808
                 *                 Curso: Física bacharelado
                 *-----------------------------------------------------------------*/

#include <stdio.h>

int main () {

    long
        base = 0,
        temp = 0,
        num_base = 0,
        decimal = 0,
        decimal_aux = 0,
        num_base_aux,
        num_base_atual,
        potencia,
        expoente,
        base_atual,
        i;

    printf ("Entre com a base: ");
    scanf ("%ld", &base);
    printf ("Entre com um numero na base %ld: ", base);
    scanf ("%ld", &num_base);
    printf ("\n");

    /*-----------------------------
        Transforma o numero
        dado (num_base)
        em base 10.
    -------------------------------*/

    num_base_aux = num_base;
    expoente = 0;
    while (num_base_aux != 0) {
        potencia = 1;
        for (i = 0; i < expoente; i = i + 1) {
            potencia = potencia * base;
        }
        temp = (num_base_aux % 10) * potencia;
        expoente = expoente + 1;
        decimal = decimal + temp;
        num_base_aux = num_base_aux / 10;
    }

    /*-----------------------------
        Apartir do numero em
        base 10 (decimal) cal-
        cula os demais nume-
        ros em suas respecti-
        vas bases.
    -------------------------------*/

    for (base_atual = 2; base_atual <= 10; ++ base_atual) {
        if (base_atual != base && base_atual != 10) {
            num_base_atual = 0,
            decimal_aux = decimal;
            expoente = 0;
            while (decimal_aux != 0) {
                potencia = 1;
                for (i = 0; i < expoente; i = i + 1) {
                    potencia = potencia * 10;
                }
                temp = (decimal_aux % base_atual) * potencia;
                num_base_atual = num_base_atual + temp;
                decimal_aux = decimal_aux / base_atual;
                ++ expoente;
            }

                printf ("O numero em base %ld e %ld.\n", base_atual , num_base_atual);

        }
        else {
            if (base_atual == base)
                printf ("O numero em base %ld e %ld.\n", base, num_base);
            else
                printf ("O numero em base 10 e %ld.\n", decimal);
        }
    }

    return 0;
}
