#include <stdio.h>

int main (void){
	
int x, n, i; 
scanf ("%d", &x);

for (i=1; i<=x; i++){

	scanf ("%d", &n);

	if (n==0){

		printf ("NULL\n", &n);

	}else if (n%2==0 && n>0){

			printf ("EVEN POSITIVE\n", &n);

		}else if (n%2==0 && n<0){

				printf ("EVEN NEGATIVE\n", &n);

			}else if (n%2 !=0 && n>0){

					printf ("ODD POSITIVE\n", &n);

				}else if (n%2 !=0 && n<0){

						printf ("ODD NEGATIVE\n", &n);
					}
						

}

return 0;
}