#include <stdio.h>

int main (void){
	
double A, SOMA, Taxa;
scanf ("%lf", &A);


if (A <= 2000.00){
	printf ("Isento\n");
}

else {

	if (A > 2000.00 && A <= 3000.00){
	SOMA = A - 2000.00;
	Taxa = SOMA / 100.00 * 8.00;
}

else if (A > 3000.00 && A <= 4500.00){
	SOMA = A - 3000.00;
	Taxa = (SOMA / 100.00) * 18.00 + 80.00;
}

else (A > 4500.00);{
	SOMA = A - 4500.00 ;
	Taxa = SOMA / 100.00 * 28 + 350.00;
}

printf ("R$ %.2lf\n", Taxa);

}
	return 0;
}






