#include <stdio.h>

int main (void)
{
	char NOME_VENDEDOR[50];
	scanf ("%s", &NOME_VENDEDOR);

	double salario, bonus, vendas;

scanf ("%lf", &salario);
scanf ("%lf", &vendas);

bonus = salario + (vendas * 0.15);

printf ("TOTAL = R$ %.2lf\n", bonus);

	return 0;
}