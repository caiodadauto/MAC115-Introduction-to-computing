#include<stdio.h>

int main () {

    int
        seq,
        volta1 = 1,
        bloco = 0,
        pass = 0,
        eh_alt = 1,
        num;
        
    printf ("Entre com o tamanho da sequencia: ");
    scanf ("%d", &seq);
    printf ("entre com o primeiro valor da sequencia: ");
    scanf ("%d", &num);
    --seq;
    while (seq >= 0) {
        for (; num % 2 == 0 && seq >= 0; --seq) {
            if (volta1) {
                ++ bloco;
                printf ("bloco=%d\n", bloco);
            }
            ++ pass;
            printf ("pass=%d\n", pass);
            if (seq != 0) {
                printf ("entre com o proximo valor da sequencia: ");
                scanf ("%d", &num);
            }
            if ((eh_alt == 1 && num % 2 != 0) || (eh_alt == 1 && num % 2 == 0 && seq == 0)) {
                if (volta1 == 0) { 
                    if (bloco != pass)
                        eh_alt = 0;
                }
                pass = 0;             
            }
        }
        if (bloco != 0)
            volta1 = 0; 

        for (; num % 2 != 0 && seq >= 0; --seq) {
            if (volta1) {
                ++ bloco;
                printf ("bloco=%d\n", bloco);
            }
            ++ pass;
            printf ("pass=%d\n", pass);
            if (seq != 0) {
                printf ("entre com o proximo valor da sequencia: ");
                scanf ("%d", &num);
            }
            if ((eh_alt == 1 && num % 2 == 0) || (eh_alt == 1 && num % 2 != 0 && seq == 0)) {
                if (volta1 == 0) { 
                    printf ("passantes=%d\n", pass);
                    printf ("blocoantes=%d\n", bloco);
                    if (bloco != pass)
                        eh_alt = 0;
                }
                pass = 0;
            }
        }
        volta1 = 0;    
    }

    if (eh_alt == 1)
        printf ("A sequnecia eh %d-alternante\n", bloco);
    else
        printf ("A sequencia nao eh alternante\n");
    return 0;
}
