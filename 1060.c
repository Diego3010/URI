#include <stdio.h>

int main (void){
	
	double A, B, C, D, E, F;
	int positivo = 0;
	scanf ("%lf %lf %lf %lf %lf %lf", &A, &B, &C, &D, &E, &F);


if (A>0) {

	positivo++;
} 

if (B>0){

	positivo++;
}

if (C>0){

	positivo++;
}

if (D>0){

	positivo++;
}

if (E>0){

	positivo++;
}

if (F>0){

	positivo++;
}
printf ("%d valores positivos\n", positivo);

return 0;

}