#include <stdio.h>

int main (void){
	
double A = (0 < A), B = (0 < B), C = (0 < C);
scanf ("%lf %lf %lf", &A, &B, &C);

A>B>C;

if (A >= B + C){printf ("NAO FORMA TRIANGULO\n");}
else if ((C*C) == (B*B) + (A*A)){ printf ("TRIANGULO RETANGULO\n");}
else if ((A*A) > (B*B) + (C*C)) { printf ("TRIANGULO OBTUSANGULO\n");}
else if ((A*A) < (B*B) + (C*C)) { printf ("TRIANGULO ACUTANGULO\n");}
else if (A == B == C) { printf ("TRINAGULO EQUILATERO\n");}
else (A == B || B == C || A == C);{printf ("TRIANGULO ISOCELES\n");}

	return 0;
}