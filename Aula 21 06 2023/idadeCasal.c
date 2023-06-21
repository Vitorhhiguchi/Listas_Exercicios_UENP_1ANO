#include <stdio.h>
int main(){

    int x, y;    // x = idade do homem, y = idade da mulher

    printf("Digite a idade do casal(namorado, namorada, marido, esposa): ");
    scanf("%d%d", &x, &y);

    if (x % 2 == 1 && y % 2 == 1){

        printf("Desconto concedido\n");  // o desconto só é aplicado caso a idade do casal seja ímpar. 

    }
    else{

        printf("Desconto nao concedido \n");

    }
    



    return 0;
}