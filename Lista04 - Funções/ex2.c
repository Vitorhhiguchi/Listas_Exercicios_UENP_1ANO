//2. Faça uma função que receba como parâmetro um número inteiro e verifique se este é primo ou não.
#include <stdio.h>

int main(){
    int numero;
    void ehPrimo(int num); // Declaração de função 

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    ehPrimo(numero);

    return 0;
}

void ehPrimo(int num){
    int i, primo = 1;
    if(num < 1){
        primo = 0;
    }
    else{
        for(i = 2; i < num; i++){
            if(num % i == 0){
                primo = 0;
                break;
            }
        }
    }
    
    if (primo){
        printf("O numero %d eh primo!", num);
    }
    else{
        printf("O numero %d nao eh primo!", num);
    }
}