#include<stdio.h>
#define MAX 200


int encaixa (char menor[], char maior[], int ind) {
    int
        i;
    for (i = 0; menor[i] != '\0'; ++ i, ++ ind)
        if (menor[i] != maior[ind])
            return 0;
    return 1;
}

int main () {
    char
        palavra[MAX],
        frase[MAX];
    int
        i,
        comp_frase,
        comp_palavra,
        cont = 0;

    printf ("\n\nentre com um a frase: ");
    scanf (" %[^\n]", frase);
    printf ("entre com uma palavra: ");
    scanf (" %[^\n]", palavra);

    for (comp_frase = 0; frase[comp_frase] != '\0'; ++ comp_frase);
    for (comp_palavra = 0; palavra[comp_palavra] != '\0'; ++ comp_palavra);
    for (i = 0; i <= comp_frase - comp_palavra; ++ i)
        cont += encaixa (palavra, frase, i);
    printf ("\nA palavra ocorre %d na frase\n\n", cont);
    return 0;
}
