#include <stdio.h>

int main (void){
	
double X, Y, Q1, Q2, Q3, Q4;

	scanf ("%lf %lf", &X, &Y);

	if (X > 0 && Y > 0) { printf ("Q1\n");
}	
		else if (X < 0 && Y > 0) { printf ("Q2\n");
	}
			else if (X < 0 && Y < 0) { printf ("Q3\n");
		}
				else if (X > 0 && Y < 0) { printf ("Q4\n");
			}
				    else if (X == 0 && Y == 0) { printf ("Origem\n");
				}
				    	else if (X == 0 && Y != 0) { printf ("Eixo Y\n");
					}	
					    	else if (X != 0 && Y == 0) { printf ("Eixo X\n");
						}	
	return 0;
}