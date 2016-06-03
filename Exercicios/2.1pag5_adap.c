#include<stdio.h>

int main () {

    int
        seq = 0,
        num_seq = 0,
        nseq = 0,
        num = 0,
        i,
        soma_par;

    printf ("\nentre com o número de sequencias: ");
    scanf ("%d", &num_seq);

    for (seq = 1; seq <= num_seq; ++ seq) {
        soma_par = 0;
        printf ("entre com o número de valores da sequencia %d: ", seq);
        scanf ("%d", &nseq);

        for (i = 0; i < nseq; ++ i) {

            if (i != 0) {
                printf ("entre com o valor do proximo numero da seuqencia %d: ", seq);
                scanf ("%d", &num);
            }
            else {
                printf ("entre com o valor do primeiro numero da seuqencia %d: ", seq);
                scanf ("%d", &num);
            }

             if ((num % 2) == 0)
                soma_par += num;           
        } 
        
        printf ("a soma dos numeros pares da %d sequencia e: %d\n\n", seq, soma_par);

    }

    return 0;
} 
