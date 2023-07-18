/*4. Faça um programa que calcule a potencia de um número qualquer fornecido pelo usuário. Para isso, implemente uma função que receba como parâmetro dois números inteiros x e n, 
calcule e retorne para o programa principal o resultado de x**n. NÃO USE nenhuma função pronta(ou seja, pow())*/
#include <stdio.h>
int main(){

    int x, n;
    int potenciaDeQualquerNumero(int numero, int potencia);

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &x, &n);

    printf("O numero %d, elevado a %d eh igual a %d", x, n, potenciaDeQualquerNumero(x, n));

    return 0;
}

int potenciaDeQualquerNumero(int numero, int potencia){
    int i, pot = 1;
    for(i=0; i < potencia; i++){
        pot = pot * numero;
    }
    return pot;
}