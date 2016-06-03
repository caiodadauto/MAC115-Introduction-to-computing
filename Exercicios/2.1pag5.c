#include<stdio.h>

int main () {

    int
        seq = 0,
        num_seq = 0,
        num = 0,
        soma_par;

    printf ("\n\nATENCAO AS SEQUENCIAS SAO TERMINADAS INSERINDO O DIGITO 0\n\n");

    printf ("\nentre com o número de sequencias: ");
    scanf ("%d", &num_seq);

    for (seq = 1; seq <= num_seq; ++ seq) {
        soma_par = 0;
        printf ("entre com o valor do primeiro numero da seuqencia %d: ", seq);
        scanf ("%d", &num);

        while (num !=0) {

             if ((num % 2) == 0)
                soma_par += num;         

                printf ("entre com o valor do proximo numero da seuqencia %d: ", seq);
                scanf ("%d", &num);           
        } 
        
        printf ("a soma dos numeros pares da %d sequencia e: %d\n\n", seq, soma_par);

    }

    return 0;
} 
