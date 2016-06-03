    /*---------------------------------------------------------------
     *       Exercicío de Programa 4
     *
     *       Nome: Caio Vinícius Dadauto
     *       Nº USP: 7994808
     *       Curso: Bacharelado em Física
     *---------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#define LZW ".lzw"
#define TXT ".txt"
#define DIC ".dic"

void string_char (char *s1, char s2);
void soma_string (char *s1, char *s2, int tam);
void insere_dicio (char dicio[][20], char string[], int *posicao);
void compactacao (FILE *arquivo, FILE *saida, FILE *saida_dic);
void busca_dicio (char dicio[30000][20], char entrada[], short *codigo);
void imprime_saida (FILE *saida, FILE *saida_dic, int posicao, char dicio[][20], char entrada[]);

/*Imprime entrada no arquivo binario e imprime o diconario e entrada no arquivo .dic*/
void imprime_saida (FILE *saida, FILE *saida_dic, int posicao, char dicio[][20], char entrada[]) {
    short
        codigo = 0;
    if (strlen(entrada) == 1) {
        codigo = entrada[0];
        fwrite (&codigo, sizeof(short), 1, saida);
    }
    else {
        busca_dicio (dicio, entrada, &codigo);
        fwrite (&codigo, sizeof(short), 1, saida);
    }
    if (posicao > 0)
        fprintf (saida_dic, "\t\t\t%d|\t%s\t\t\t\t\t\t\
        ||\t%d|\t%s\n", codigo, entrada, posicao + 127, dicio[posicao - 1]);
    else
        fprintf (saida_dic, "\t\t\t%d|\t%s\t\t\t\t\t\t\t\t||\t\t|\n", codigo, entrada);
}

/*Insere uma string no dicionario*/
void insere_dicio (char dicio[][20], char string[], int *posicao) {
    strcpy (dicio[*posicao], string);
    ++ *posicao;
}

/*Busca uma string e retorna o codigo (>128) da mesma*/
void busca_dicio (char dicio[][20], char entrada[], short *codigo) {
    int
        igual = 0,
        i,
        j;
    for (i = 0; i < 30000 && igual == 0; ++ i) {
        igual = 1;
        for (j = 0; j < 20 && igual == 1 && entrada[j] != '\0' ; ++ j) {
            if (entrada[j] != dicio[i][j])
                igual = 0;
        }
    }
    if (igual)
        *codigo = i + 127;
}

/*Junta uma string a um unico caracter*/
void string_char (char *s1, char s2) {
    int
        i;
    for (i = strlen(s1); i < 20; ++ i)
        s1[i] = '\0';
    s1[strlen(s1)] = s2;
}

/*Junta duas strings*/
void soma_string (char *s1, char *s2, int tam) {
    int
        i;
    for (i = tam; s2[i - tam] != '\0'; ++ i)
        s1[i] = s2[i - tam];
    s1[i] = '\0';
}

void compactacao (FILE *arquivo, FILE *saida, FILE *saida_dic) {
    char
        aux,
        dicio[30000][20],
        soma[20],
        entrada[20];
    short
        codigo;
    int
        posicao = 0,
        j,
        i;
/*Inicializa as strings entrada, soma e a matriz dicio*/
    for (i = 0; i < 20; ++ i) {
        entrada[i] = '\0';
        soma[i] = '\0';
    }
    for (i = 0; i < 30000; ++ i) {
        for (j = 0; j < 20; ++ j)
            dicio[i][j] = '\0';
    }

    fscanf (arquivo, "%c", &aux);
      while (!feof(arquivo)) {
        codigo = 0;
        strcpy (soma, entrada);
        string_char (soma, aux);
        busca_dicio (dicio, soma, &codigo);
        if (strlen(soma) > 1 && codigo == 0) {
            insere_dicio (dicio, soma, &posicao);
            imprime_saida (saida, saida_dic, posicao, dicio, entrada);
            for (i = 0; i < 20; ++ i)
                entrada[i] = '\0';
            entrada[0] = aux;
        }
        else
            strcpy (entrada, soma);
        fscanf (arquivo, "%c", &aux);
    }
    posicao = -1;
    imprime_saida (saida, saida_dic, posicao, dicio, entrada);
}

void descompactacao (FILE *arquivo, FILE *saida, FILE *saida_dic) {
    char
        aux,
        dicio[30000][20],
        entrada_ant[20],
        entrada[20];
    short
        codigo;
    int
        posicao = 0,
        j,
        i;
/*Inicializa as strings entrada, entrada_ant e a matriz dicio*/
    for (i = 0; i < 20; ++ i) {
        entrada[i] = '\0';
        entrada_ant[i] = '\0';
    }
    for (i = 0; i < 30000; ++ i) {
        for (j = 0; j < 20; ++ j)
            dicio[i][j] = '\0';
    }

    fread (&codigo, sizeof(short), 1, arquivo);
    entrada[0] = (char) codigo;
    fprintf (saida, "%s", entrada);
    fprintf (saida_dic, "\t\t\t%d|\t%s\t\t\t\t\t\t\t\t||\t\t|\n", codigo, entrada);
    fread (&codigo, sizeof(short), 1, arquivo);

    while (!feof(arquivo)) {
        strcpy (entrada_ant, entrada);
        if (codigo < 128) {
            for (i = 0; i < 20; ++ i)
                entrada[i] = '\0';
            entrada[0] = (char) codigo;
        }
        else {
            for (i = 0; i < strlen(entrada); ++ i)
                entrada[i] = '\0';
            strcpy (entrada, dicio[codigo - 128]);
        }

        fprintf (saida, "%s", entrada);
        aux = entrada[0];
        string_char (entrada_ant, aux);
        insere_dicio (dicio, entrada_ant, &posicao);
        fprintf (saida_dic, "\t\t\t%d|\t%s\t\t\t\t\t\t\
        ||\t%d|\t%s\n", codigo, entrada, posicao + 127, dicio[posicao - 1]);
        fread (&codigo, sizeof(short), 1, arquivo);
    }
}

int main () {
    FILE
        *saida,
        *saida_dic,
        *arquivo;
    int
        opcao = 0,
        tam;
    char
        nome_arq[20],
        nome[20];

    while (opcao != 3) {
        printf ("\n\nOPCAO:\n");
        printf ("\t1 - Para compactar um arquivo.\n");
        printf ("\t2 - Para descompactar um arquivo.\n");
        printf ("\t3 - Para finalizar o programa.\n\n");
        printf ("Entre com uma das opcoes: ");
        scanf ("%d", &opcao);
        getchar ();
        switch (opcao) {
            case 1 :
                printf ("\nEntre com o nome do arquivo a ser lido (com a extensao): ");
                scanf ("%[^\n]", nome_arq);
                getchar ();
                arquivo = fopen (nome_arq, "r");
                if (arquivo == NULL) {
                    printf ("ERRO: Arquivo %s nao encontrado\n", nome_arq);
                    return -1;
                }
                printf ("Entre com o nome do arquivo de saida (sem a extensao): ");
                scanf ("%[^\n]", nome);
                getchar ();

                tam = strlen(nome);
                soma_string (nome, LZW, tam);
                saida = fopen (nome, "wb");
                if (saida == NULL) {
                    printf ("ERRO: Nao foi possivel criar o arquivo %s\n", nome);
                    return -1;
                }

                nome[tam] = '\0';
                soma_string (nome, DIC, tam);
                saida_dic = fopen (nome, "w");
                if (saida_dic == NULL) {
                    printf ("ERRO: Nao foi possivel criar o arquivo %s\n", nome);
                    return -1;
                }
                fprintf (saida_dic, "Arquivo Compactado\t\t\t||\tDicionario\n\tCodigo | Saida\
                \t\t||\tCodigo | Entrada\n");
                compactacao (arquivo, saida, saida_dic);
                printf ("\n\tCompactacao realizada com sucesso!\n");
                printf ("\tFoi criado o arquivo compactado (.lzw) e a biblioteca (.dic).");
                fclose (saida);
                fclose (saida_dic);
                fclose (arquivo);
                break;

            case 2 :
                printf ("Entra com o nome arquivo a ser descompactado (com a extensao): ");
                scanf ("%[^\n]", nome_arq);
                getchar ();
                arquivo = fopen(nome_arq, "rb");
                if (arquivo == NULL) {
                    printf ("ERRO: Arquivo %s nao encontrado\n", nome_arq);
                    return -1;
                }
                printf ("Entre com o nome do arquivo de saida (sem a extensao): ");
                scanf ("%[^\n]", nome);
                getchar ();

                tam = strlen(nome);
                soma_string (nome, TXT, tam);
                saida = fopen (nome, "w");
                if (saida == NULL) {
                    printf ("ERRO: Nao foi possivel criar o arquivo %s\n", nome);
                    return -1;
                }

                nome[tam] = '\0';
                soma_string (nome, DIC, tam);
                saida_dic = fopen (nome, "w");
                if (saida_dic == NULL) {
                    printf ("ERRO: Nao foi possivel criar o arquivo %s\n", nome);
                    return -1;
                }
                fprintf (saida_dic, "Arquivo Descompactado\t\t\t||\tDicionario\n\tCodigo | Saida\
                \t\t\t||\tCodigo | Entrada\n");
                descompactacao (arquivo, saida, saida_dic);
                printf ("\n\tCompactacao realizada com sucesso!\n");
                printf ("\tFoi criado o arquivo de texto descompactado (.txt) e a biblioteca (.dic).");
                fclose (saida);
                fclose (saida_dic);
                fclose (arquivo);
                break;
        }
    }
    printf ("\n\nVIDA LONGA E PROSPERA !\n\n");
    return 0;
}
