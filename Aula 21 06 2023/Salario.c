#include <stdio.h>
int main(){

    float salario, aumento;

    printf("Escreva o seu salario: ");
    scanf("%f", &salario);
    
    if (salario <= 1000){

        aumento = salario * 0.15;
        salario = salario + aumento;
        printf("Voce vai receber um aumento de 15%%, e entao passara a receber R$ %.2f reais.", salario);

    }

    else if (salario > 1000 && salario <= 2000){

        aumento = salario * 0.10;
        salario = salario + aumento;
        printf("Voce vai receber um aumento de 10%%, e entao passara a receber R$ %.2f reais.", salario);

    }

    else{

        aumento = salario * 0.05;
        salario = salario + aumento;
        printf("Voce vai receber um aumento de 5%%, e entao passara a receber R$ %.2f reais.", salario);
    }

    return 0;
}