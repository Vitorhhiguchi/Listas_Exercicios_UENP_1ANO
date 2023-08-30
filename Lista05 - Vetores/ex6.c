/*6. Fa ̧ca um programa que leia uma sequˆencia de n ́umeros inteiros e armazene em um vetor.
Em seguida, implemente uma fun ̧c ̃ao que determine e mostre os n ́umeros do vetor que s ̃ao
m ́ultiplos de 7.*/

#include <stdio.h>
int main(){

    void multDeSete(int vet[], int quant);
    int quant, i;

    printf("Digite a quantidade de numeros que vai ser introduzido: ");
    scanf("%d", &quant);

    int vet[quant];

    for(i=0; i < quant; i++){
        printf("Digite um numero inteiro: \n");
        scanf("%d", &vet[i]);
    }

    multDeSete(vet, quant);

    return 0; 
}

void multDeSete(int vet[], int quant){
    int i;

    for(i=0; i < quant; i++){
        if(vet[i] % 7 == 0){
            printf("%d eh multiplo de 7!\n", vet[i]);
        }
    }

}
