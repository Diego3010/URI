#include <stdio.h>

int main (void){

	double n, soma = 0;
	int i, positivo = 0;

	for (i = 1; i <= 6; i++){

		scanf ("%lf", &n);


		if (n>0){

			positivo++;
			soma += n;
		}
	}

		printf ("%d valores positivos\n", positivo);
		printf ("%.1lf\n", soma/positivo);



	return 0;
}