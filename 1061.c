#include <stdio.h>

int main (void){

	int di, df, hi, hf, mi, mf, si, sf;
	char dia[5], diaf[5], ponto[3];

	scanf ("%s %d", dia, &di);
	scanf ("%d %s %d %s %d", &hi, ponto, &mi, ponto, &si);
	scanf ("%s %d", diaf, &df);
	scanf ("%d %s %d %s %d", &hf, ponto, &mf, ponto, &sf);

	si = sf - si;
	mi = mf - mi;
	hi = hf - hi;
	di = df - di;


	if (si < 0){

		si += 60;
		mi--;
	}

	if (mi < 0){

		mi += 60;
		hi--;
	}

	if (hi < 0){

		hi += 24;
		di--;
	}


	printf ("%d dia(s)\n", di);
	printf ("%d hora(s)\n", hi);
	printf ("%d minuto(s)\n", mi);
	printf ("%d segundo(s)\n", si);

	return 0;
}