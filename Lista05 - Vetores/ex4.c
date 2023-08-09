/*4. Faça um programa que leia uma sequência de 21 números inteiros e armazene em um vetor.
Depois, determine se o último número lido está presente nos 20 primeiros e mostre as
posições do vetor em que ele se encontra.*/
#include <stdio.h>
#define TAM 5
int main(){

    int i, numeros[TAM];

    for(i=0; i<TAM; i++){
        printf("Digite um numero inteiro: \n");
        scanf("%d", &numeros[i]);
    }

    for(i=0; i<TAM-1; i++){
        if(numeros[TAM-1] == numeros[i]){
            printf("Numero[%d] eh igual ao ultimo valor digitado %d\n", i, numeros[TAM-1]);
        }
        else{
            printf("O numero %d nao se repetiu", numeros[TAM-1]);
        }
    }

    return 0;
}