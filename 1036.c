#include <stdio.h>
#include <math.h>

int main (void){
	
double A, B, C, DELTA, R1, R2;
scanf ("%lf %lf %lf", &A, &B, &C);

DELTA = (pow(B, 2)-4*A*C);
R1 = (-B + sqrt(DELTA)) / (2 * A);
R2 = (-B - sqrt(DELTA)) / (2 * A);


if (A != 0 && DELTA > 0){
		printf ("R1 = %.5lf\n", R1);
		printf ("R2 = %.5lf\n", R2);
}

			else 
			printf ("Impossivel calcular\n");


	return 0;
}