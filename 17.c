#include <stdio.h>

int main (void){

double tempo, velocidade, litros;

scanf ("%lf %lf", &tempo, &velocidade);

litros = (velocidade / 12 ) *tempo;


printf ("%.3lf\n", litros);


return 0;

}	