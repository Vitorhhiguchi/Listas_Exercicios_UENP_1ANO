#include <stdio.h>
int main(){

    int resto, x, ehPar;

    printf("Digite o valor de um numero:");
    scanf("%d", &x);

    resto = (x%2);
    ehPar = (resto == 0);
    //negando o valor de é Par
    if (!ehPar){

        printf("O numero digitado eh impar \n");

    }

   else{

        printf("O numero digitado eh par \n");

    }  

    return 0;
}