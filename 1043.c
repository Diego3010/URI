#include <stdio.h>

int main (void)
{
	
	double A, B, C;
	scanf ("%lf %lf %lf", &A, &B, &C);

	if (A + B > C && B + C > A && A + C > B){
		printf ("perimetro = %.1lf\n", A + B + C);

	}

	else  { printf ("Area = %.1lf\n", C * (A+B) / 2);
	}
			
		

	return 0;
}