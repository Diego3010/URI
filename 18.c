#include <stdio.h>

int main (void){

	int N, cem, cinquenta, vinte, dez, cinco, dois, um;

	scanf ("%d", &N);

	cem = N / 100;
	um = N%100;
	cinquenta = um/ 50;
	um = um%50;
	vinte = um / 20;
	um = um%20;
	dez = um / 10;
	um = um%10; 
	cinco = um/ 5;
	um = um%5;
	dois = um / 2;
	um = um%2;


printf ("%d\n", N);
printf("%d nota(s) de R$ 100,00\n", cem);
printf("%d nota(s) de R$ 50,00\n", cinquenta);
printf("%d nota(s) de R$ 20,00\n", vinte);
printf("%d nota(s) de R$ 10,00\n", dez);
printf("%d nota(s) de R$ 5,00\n", cinco);
printf("%d nota(s) de R$ 2,00\n", dois);
printf("%d nota(s) de R$ 1,00\n", um);

	return 0;
}