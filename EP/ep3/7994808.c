    /*---------------------------------------------------------------
     *       Exercicío de Programa 2
     *
     *       Nome: Caio Vinícius Dadauto
     *       Nº USP: 7994808
     *       Curso: Bacharelado em Física
     *---------------------------------------------------------------*/

#include<stdio.h>
#define ENTRADA "entrada.txt"
#define EPS 1E-6
#define PI 3.14159

void sorteia (float a, float b, float maxf, long *xi, float *x, float *y);
float monte_carlo (float a, float b, long *xi, int n);
float trapezoide (float a, float b, int k);
float retangulo (float a, float b, int k);
float errorel (float y, float x);
float raiz (float x);
int sao_iguais (float x, float y);

int sao_iguais (float x, float y) {
    if (x - y < EPS && y - x < EPS)
        return 1;
    else
        return 0;
}


float raiz (float x) {
    float
        termo_2 = 0,
        termo_1;

    termo_1 = x;
    while (errorel (termo_1, termo_2) > EPS) {
        if (termo_2 != 0)
            termo_1 = termo_2;
        termo_2 = (termo_1 + (x / termo_1)) / 2;
    }
    return termo_2;
}

float errorel (float y, float x) {
    float
        erro;

    if (x == 0) {
        if (y == 0)
            erro = 0;
        if (y != 0)
            erro = 1;
    }
    else{
        erro = (y - x) / x;
        if (erro < 0)
            erro *= (-1);
    }
    return erro;
}

float retangulo (float a, float b, int k) {
    long
        i;
    float
        area = 0,
        delta_x;

    delta_x = (b - a) / k;
    for (i = 1; i <= k; ++ i) 
        area += raiz (1 - (a + ((delta_x * i)  * (delta_x * i))));
    area *= delta_x;

    return area;
}

float trapezoide (float a, float b, int k) {
    long
        j,
        i;
    float
        area = 0,
        delta_x;

    delta_x = (b - a) / k;
    for (j = 0, i = 1; i <= k; ++ j, ++ i) {
        area += ((raiz (1 - ((a + delta_x * j) * (a + delta_x * j))) +
        raiz (1 - ((a + delta_x * i) * (a + delta_x * i)))) * delta_x) / 2;
    }
    return area;
}

void sorteia (float a, float b, float maxf, long *xi, float *x, float *y) {
    long
        aux;

    aux = (75 * *xi) % 65537;
    *x = a + ((float) aux / 65536) * (b - a);
    *xi = aux;
    aux = (75 * *xi) % 65537;
    *y = ((float) aux / 65536) * maxf;
    *xi = aux;
}

float monte_carlo (float a, float b, long *xi, int n) {
    float
        x,
        y,
        M, /* Valor máximo que f(x) pode assumir em [a; b] */
        area,
        prop; /* Proporção dos pontos contidos em f(X) */
    int
        i,
        pertence = 0;

    M = raiz (1 - (a)); /* Uma vez que "a" é o menor valor de [a, b] e "f" um semi circulo */
    for (i = n; i > 0; -- i) {
        sorteia (a, b, M, xi, &x, &y);
        if (y < (raiz (1 - (x * x))) || sao_iguais (raiz (1 - (x * x)), y))
            ++ pertence;
    }
    prop = (float) pertence / n;
    area = prop * M * (b - a);

    return area;
}

int main () {
    FILE
        *entrada;
    int
        i,
        n_rep, /* Número de repetições */
        n_pontos, /* Número de pontos */
        k; /* Numero de retangulos ou trapezios */
    long
        semente;
    char
        metodo;
    float
        soma,
        area;

    entrada = fopen (ENTRADA, "r");
    if (entrada == NULL) {
        printf ("ERRO : arquivo nao encontrado\n");
        return -1;
    }

    while (!feof (entrada)) {
        fscanf (entrada, "%c", &metodo);
        switch (metodo) {
            case 'm' :
                fscanf (entrada, "%ld %d %d", &semente, &n_rep, &n_pontos);
                printf ("Metodo Monte Carlo, semente=%ld repeticoes=%d pontos=%d\n", semente, n_rep, n_pontos);

                soma = 0;
                for ( i = 1; i <= n_rep; ++ i) {
                    area = monte_carlo (0, 1, &semente, n_pontos);
                    printf (" Estimativa %d:    pi=%.5f    erro=%.5f\n", i, area * 4, errorel (area * 4, PI));
                    soma += area * 4;
                }
                printf ("<resposta> <mtc>     %.5f     %.5f\n\n", soma / n_rep, errorel (soma / n_rep, PI));
                break;
            case 'r' :
                fscanf (entrada, "%d\n", &k);
                printf ("Metodo dos retangulos, retangulos=%d  deltax=%.5f\n", k, 1.0 / k);
                area = retangulo (0, 1, k);
                printf ("<resposta> <ret>     %.5f     %.5f\n\n", area * 4, errorel (area * 4, PI));
                break;
            case 't' :
                fscanf (entrada, "%d", &k);
                printf ("Metodo dos trapezios, retangulos=%d  deltax=%.5f\n", k, 1.0 / k);
                area = trapezoide (0, 1, k);
                printf ("<resposta> <tpz>     %.5f     %.5f\n\n", area * 4, errorel (area * 4, PI));
                break;
        }
    }
    fclose (entrada);
    return 0;
}
