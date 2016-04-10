#include <stdio.h>

int main (void)

{

 int codigo1, numero_pecas1, codigo2, numero_pecas2;
 double valor1, valor2, total1, total2, TOTAL;

 scanf ("%d %d %lf", &codigo1, &numero_pecas1, &valor1);
 scanf ("%d %d %lf", &codigo2, &numero_pecas2, &valor2);

TOTAL = (((numero_pecas1*valor1)+(numero_pecas2*valor2)));

printf ("VALOR A PAGAR: R$ %.2f\n", TOTAL);


return 0;

}	