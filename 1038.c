#include <stdio.h>

int main (void){
	
int codigo, quantidade;
double valor, Total;

scanf ("%d %d", &codigo, &quantidade);

if (codigo == 1) {
	valor = 4.00;
				}
		if (codigo == 2) {
	valor = 4.50;
				}
					if (codigo == 3) {
		valor = 5.00;
				}
						if (codigo == 4) {
			valor = 2.00;
				}
							if (codigo == 5) {
				valor = 1.50;
				}


 Total = quantidade * valor;
printf ("Total: R$ %.2lf\n", Total);

	return 0;
}