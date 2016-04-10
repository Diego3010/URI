#include <stdio.h>

int main (void)
{
	int numero_funcionario, horas;
	scanf ("%d", &numero_funcionario);
	scanf ("%d", &horas);

	double valor, salario;
	scanf ("%lf", &valor);

	salario = (valor*horas);

	printf ("NUMBER = %d\n", numero_funcionario);
	printf ("SALARY = U$ %.2lf\n", salario);

	return 0;
}