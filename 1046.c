#include <stdio.h>

int main(void){

    int ti, tf, hora;
    scanf("%d %d", &ti, &tf);


    hora = tf - ti;

    if (hora < 0)

    {
      hora = 24 + (tf - ti);
    }
    if (ti == tf)

    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    else printf("O JOGO DUROU %d HORA(S)\n", hora);

 
    return 0;

}