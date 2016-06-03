#include <stdio.h>
int main () {
    int
        n,
        i,
        j,
        candidato = 0,
        impressos = 0;

    printf ("Digite os valores de i, j e n: ");
    scanf ("%d%d%d", &i, &j, &n);

    while (impressos < n) {
        if((candidato % i == 0) || (candidato % j == 0)) {
            printf ("%d", candidato);
            impressos ++;
        }
        candidato ++;
    }
    return 0;  
}

    
