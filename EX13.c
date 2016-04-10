#include <stdio.h>

int main (void)

{

int A, B, C, MAIORAB;

scanf ("%d %d %d", &A,&B,&C);


if (A > B)
	if (A > C)
printf ("%d eh o maior\n", A);

if (B > A)
	if (B > C)
printf ("%d eh o maior\n", B);

if (C > A)
	if (C > B)
printf ("%d eh o maior\n", C);



return 0;

}	