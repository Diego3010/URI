#include <stdio.h>

int main (void){
	
int N, ano, mes, dias;

scanf ("%d", &N);

ano = N / 365;
mes = N % 365 / 30;
dias = N % 365 % 30;

printf ("%d ano(s)\n", ano);
printf ("%d mes(es)\n", mes);
printf ("%d dia(s)\n", dias);

	return 0;
}