#include<stdio.h>
#define MAX 200

int main () {
    float
        aux,
        v[MAX];
    int
        n,
        i,
        j,
        cont;

    printf ("entre com n: ");
    scanf ("%d", &n);
    printf ("entre com um seuqencia de n numeros reais: ");
    for (i = 0; i < n; ++ i)
        scanf ("%f", &v[i]);

    for (i = 1; i < n; ++ i){
        aux = v[i];
        for (j = i - 1; aux < v[j] && j >= 0; -- j) 
            v[j + 1] = v[j];
        v[j + 1] = aux;
    }

    i = 0;
    while (i < n){
        cont = 1;
        for (j = i + 1; v[i] == v[j]; ++ j)
            ++ cont;
        printf ("\t%.1f\tocorre\t%d\n", v[i], cont);
        i = j;
    }
    return 0;
}
