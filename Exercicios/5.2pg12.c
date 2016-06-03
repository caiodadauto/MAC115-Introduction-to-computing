#include<stdio.h>

int bissexto (int a) {
	if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
		return 1;
	else
		return 0;
}

void data_seguinte (int *dia, int *mes, int *ano) {
	int 
		pass = 0;

	if (*dia == 30 && (*mes == 4 || *mes == 6 || *mes == 9 || *mes == 11)) {
		*dia = 1;
		++ *mes;
		pass = 1;
	}
	if (*dia == 31 && *mes != 12) {
		*dia = 1;
		++ *mes;
		pass = 1;
	}
	if (*dia == 31 && *mes == 12) {
		*dia = 1;
		*mes = 1;
		++ *ano;
		pass = 1;
	}
	if (*mes == 2 && bissexto (*ano) == 0 && *dia == 28) {
		*dia = 1;
		++ *mes;
		pass = 1;
	}
	if (*mes == 2 && bissexto (*ano) == 1 && *dia == 28) {
		++ *dia;
		pass = 1;
	}
	if (pass == 0) {
		++ *dia;
	}
}
int main () {
	int
		dia,
		mes,
		ano,
		n;
	
	printf ("entre com o numero de datas a ser inseridas: ");
	scanf ("%d", &n);
	printf ("entre com os valores das datas (dd/mm/aaaa): ");
	
	for ( ; n > 0; -- n) {
		scanf ("%d%d%d", &dia, &mes, &ano);
		data_seguinte (&dia, &mes, &ano);
		printf ("a data seguinte é %d/%d/%d\n", dia, mes, ano);
	}
	return 0;
}
