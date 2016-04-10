#include <stdio.h>

int main (void)
{
	
double A, B, MEDIA;

scanf ("%lf", &A);
scanf ("%lf", &B);

MEDIA = ((A*0.35) + (B*0.75))/11 *10;

printf ("MEDIA = %.5lf\n", MEDIA);

	return 0;
}