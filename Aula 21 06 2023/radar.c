#include <stdio.h>
int main (){

    float x, y;
    char op;
    
    printf("Digite um numero, um operador e outro numero: ");
    scanf("%f%c%f", &x, &op, &y);

    switch (op){
    case '+':
        printf("Adicao = %.2f \n", x + y);
        break;
    case '-':
        printf("Subracao = %.2f \n", x - y);
        break;
    case '*':
        printf("Multiplicacao = %.2f \n", x * y);
        break;
    case '/':
        printf("Divisao = %.2f \n", x / y);
        break;
    default:
        printf("Operador desconhecido \n");
    }

    return 0;
}