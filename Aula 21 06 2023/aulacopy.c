#include <stdio.h>
int main(){

    float notaB1, notaB2, notaB3, notaB4, media;
    
    printf("Escreva suas notas: ");
    scanf("%f%f%f%f", &notaB1, &notaB2, &notaB3, &notaB4);

    media = (notaB1 + notaB2 + notaB3 + notaB4) / 4;
    printf("Media: %.2f \n", media);

    if (media >= 7){

        printf("Aprovado\n");

    }




    return 0;
}