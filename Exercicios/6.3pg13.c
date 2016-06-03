#include<stdio.h>
#define MAX 12

int main () {
    int
        i,
        j,
        re,
        n;
    float
        p[MAX];

    for (i = 0; i < MAX; ++ i)
        p[i] = 0;
    printf ("entre com o numero de jogadas: ");
    scanf ("%d", &n);
    printf ("entra com os resultados em sequencia ");
    for (i = 0; i < n; ++ i) {
        scanf ("%d", &re);
        switch (re) {
        case 1 :
            ++ p[0];
            p[1] += p[0] / n;
            break;
        case 2 :
            ++ p[2];
            p[3] += p[2] / n;
            break;
        case 3 :
            ++ p[4];
            p[5] += p[4] / n;
            break;
        case 4 :
            ++ p[6];
            p[7] += p[6] / n;
            break;
        case 5 :
            ++ p[8];
            p[9] += p[8] / n;
            break;
        case 6 :
            ++ p[10];
            p[11] += p[10] / n;
            break;
        }
    }
    printf ("\n\nFace \t Frequencia\n");
    for (i = 1, j = 1; i <= 11; i += 2, ++ j) {
        printf ("%d \t %.2f\n", j, p[i]);
    }
    printf ("\n");
    return 0;
}
