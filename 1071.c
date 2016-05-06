#include <stdio.h>

int main (void){
	

int i, x, in=0, out=0, n;

scanf ("%d", &x);

for (i=0; i<x; i++){

	scanf ("%d", &n);

	if (n>=10 && n<=20){

		in++;}

		else {
			out++;
		}
		
	}

	

printf ("%d in\n", in);
printf ("%d out\n", out);


	return 0;
}