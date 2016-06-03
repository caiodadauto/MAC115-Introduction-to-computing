#include<stdio.h>
#include<math.h>
#define MAX 200

int main () {
    float
        pontos[MAX],
        dist[MAX],
        x,
        y;
    int
        i,
        j,
        n;
    printf ("entre com o ponto (x; y) :");
    scanf ("%f%f", &x, &y);
    printf ("entre com o numero 1 < n < 100 :");
    scanf ("%d", &n);
    printf ("entre com os n pontos na forma  (x; y), respectiamente :");
    for (i = 0; i < (2 * n); ++ i)
        scanf ("%f", &pontos[i]);
    for (i = 0, j = 0; i < n; ++ i, j += 2)
        dist[i] = sqrt((x - pontos[j]) * (x - pontos[j]) + (y - pontos[j + 1]) * (y - pontos[j + 1]));
    for (i = 0; i < n; ++ i) {
        for (j = i + 1; j < n; ++ j) {
            if (dist[i] == dist[j])
                dist[j] = 0;
        }
    }
    printf ("Há circunfrências de raios: ");
    for (i = 0; i < n; ++ i) {
        if (dist[i] != 0)
            printf ("%.2f ", dist[i]);
    }
    printf ("\n");
    return 0;
}
