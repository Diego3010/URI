#include <stdio.h>

int main (void)

{

int a, b, c, MAIORAB, MAIORABC;
scanf ("%d %d %d", &a, &b, &c);

MAIORAB = (a + b + abs (a - b) )/2;
MAIORABC = (MAIORAB + c + abs ( MAIORAB - c))/2;

printf ("%d eh o maior\n", MAIORABC);

return 0;

}	