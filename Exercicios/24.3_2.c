#include<stdio.h>
#define MAX 100

int main () {
    typedef struct {
        char dono[MAX];
        struct {
            char rua[MAX];
            char cep[MAX];
        } endereco;
    char marca[MAX];
    int ano;
    } carro;

    FILE
        *file;
    carro
        frota[MAX];
    int
        i,
        n;

    printf ("Entre com o numero de carros da frota: ");
    scanf ("%d", &n);
    for (i = 0; i < n; ++ i) {
        printf ("%d-CARRO DA FROTA:\n\n", i + 1);
        printf ("\tEntre com o nome do dono: ");
        scanf (" %[^\n]", frota[i].dono);
        printf ("\tEntre com o nome da rua e com o cep (ambos seguido de enter): ");
        scanf (" %[^\n]", frota[i].endereco.rua);
        scanf (" %[^\n]", frota[i].endereco.cep);
        printf ("\tEntre com a marca do carro: ");
        scanf (" %[^\n]", frota[i].marca);
        printf ("\tEntre com o ano do carro: ");
        scanf ("%d", &frota[i].ano);
    }
    file = fopen("test.txt", "w");
    if (file == NULL) {
    printf ("ERRO: arquivo não encontrado/não é possível cria-lo.");
    return -1;
    }
    for (i = 0; i < n; ++ i) {
        fprintf (file, "< %d-CARRO DA FROTA >\n\n", i + 1);
        fprintf (file, "\tNome do dono: %s\n", frota[i].dono);
        fprintf (file, "Endereço ->\n");
        fprintf (file, "\tRua: %s\n", frota[i].endereco.rua);
        fprintf (file, "\tCEP: %s\n", frota[i].endereco.cep);
        fprintf (file, "Carro ->\n");
        fprintf (file, "\tMarca do carro: %s\n", frota[i].marca);
        fprintf (file, "\tAno do carro: %d\n\n", frota[i].ano);
    }
    fclose (file);

    return 0;
}
