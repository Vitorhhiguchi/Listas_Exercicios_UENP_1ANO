/*3. Faça um programa que leia 50 números inteiros e armazene em um vetor. Em seguida,
armazene os números pares no vetor chamado par e os números ímpares no vetor ímpar.
Imprima os dois vetores resultante.*/
#include <stdio.h>
#define TAM 50
int main(){
    
    int i, j, numeros[5], ehPar, ehImpar;

    for(i=0; i<5; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &numeros[i]);
    }

    for(i=0; i<5; i++){
        if(numeros[i] % 2 == 0){
            ehPar++;
        }
        else{
            ehImpar++;
        }
    }

    int pares[ehPar];
    int impares[ehImpar];
    for(i=0; i < ehPar; i++){
        if(numeros[i] % 2 == 0){
            pares[ehPar] = numeros[i];
        }
        else{
            impares[ehImpar] = numeros[i];
        }
    } 

    for(i=0; i<ehPar; i++){
        printf("Os numeros pares sao: %d\n", pares[i]);
    }
    for(i=0; i<ehImpar; i++){
        printf("Os numeros impares sao: %d\n", impares[i]);
    }

    return 0;
}

// NÃO FUNCIONOU!