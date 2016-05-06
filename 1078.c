#include <stdio.h>

int main (void){
	
int i;
scanf ("%d", &i);

if (i>=2 && i<1000){

	printf ("%d x %d = %d\n", 1, i, i);
	printf ("%d x %d = %d\n", 2, i, i*2);
	printf ("%d x %d = %d\n", 3, i, i*3);
	printf ("%d x %d = %d\n", 4, i, i*4);
	printf ("%d x %d = %d\n", 5, i, i*5);
	printf ("%d x %d = %d\n", 6, i, i*6);
	printf ("%d x %d = %d\n", 7, i, i*7);
	printf ("%d x %d = %d\n", 8, i, i*8);
	printf ("%d x %d = %d\n", 9, i, i*9);
	printf ("%d x %d = %d\n", 10, i, i*10);

}

	return 0;
}