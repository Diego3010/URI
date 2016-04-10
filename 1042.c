#include <stdio.h>

int main(void){
	
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);


	if(A >= B && B >= C){
		printf("%d\n", C);
		printf("%d\n", B);
		printf("%d\n", A);

	} else if(A >= B && C >= B){
		printf("%d\n", B);
		printf("%d\n", C);
		printf("%d\n", A);

	} else if(B >= A && A >= C){
		printf("%d\n", C);
		printf("%d\n", A);
		printf("%d\n", B);

	} else if(C >= A && A >= B){
		printf("%d\n", A);
		printf("%d\n", C);
		printf("%d\n", B);
		
	} else if(B >= C && C >= A){
		printf("%d\n", B);
		printf("%d\n", A);
		printf("%d\n", C);
		
	} else if(C >= B && B >= A){
		printf("%d\n", A);
		printf("%d\n", B);
		printf("%d\n", C);

	}
	printf("\n");
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);

	return 0;
}