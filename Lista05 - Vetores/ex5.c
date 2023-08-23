/*5. Faça um programa em leia uma sequência de números e armazene em um vetor. Em
seguida, determine e mostre quantos números lidos estão dentro do intervalo entre 10 e 50.
O programa deve ser encerrado quando for lido o número -1.*/
#include <stdio.h>
#define TAM 100000
int main(){

    int numeros[TAM], i=0, dentroIntervalo=0, continuar;

    while (numeros[i] != -1){
        printf("Digite um numero inteiro: \n");
        scanf("%d", &numeros[i]);

        if(numeros[i] > 10 && numeros[i] < 50){
            dentroIntervalo++;
        }

        i++;

    }
    
    printf("A quantidade de numeros entre 10 e 50 eh de: %d", dentroIntervalo);

    return 0;
}