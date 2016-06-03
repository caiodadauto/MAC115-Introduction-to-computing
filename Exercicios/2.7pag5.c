#include<stdio.h>

int main () {

    int
        seq,
        num2,
        num1,
        resto;
        
    printf ("Entre com o tamanho da sequencia: ");
    scanf ("%d", &seq);
    printf ("Entre com o primeiro valor: ");
    scanf ("%d", &num2);

    for (; (seq - 1) > 0; -- seq) {
        printf ("Entre com o proximo numero: ");
        scanf ("%d", &num1);
        resto = num1 % num2;
        while (resto != 0) {
            num1 = num2;
            num2 = resto;
            resto = num1 % num2;
        }
    }
    printf ("O mdc da sequencia eh %d\n", num2); 
    return 0;
}
