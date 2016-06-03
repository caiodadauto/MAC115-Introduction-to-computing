#include<stdio.h>

void convert (char ch, int *tipo, char *valor);

void convert (char ch, int *tipo, char *valor) {
	if ((ch >= '0' && ch <= '9') || ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
		if (ch >= '0' && ch <= '9' )
			*tipo = 0;
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
			*tipo = 1;
			if (ch >= 'a' && ch <= 'z')
				*valor = ch - ('a' - 'A');
			}
	}
	else
		*tipo = 2;
}

int main () {
	char
		cr,
		ch;
	int
		tipo = 2,
		n;
	
	printf ("entre com o numero de caracteres a ser inseridos: ");
	scanf ("%d", &n);
	printf ("entre com os caracteres: ");
	
	for ( ; n > 0; -- n) {
		scanf (" %c", &ch);
		cr = ch;
		convert (ch, &tipo, &cr);
		if (tipo != 2) {
			if (n > 1)
				printf ("%c", cr);
			else
				printf ("%c\n", cr);
		}		
	}
	return 0;
}
