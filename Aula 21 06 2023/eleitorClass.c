#include <stdio.h>
int main(){

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 65 ){

        printf("Eleitor obrigatorio");

    }

    else if (idade >= 16 && idade == 18 || idade > 65){

        printf("Eleitor facultativo");

    }

    else{

        printf("Nao eleitor");

    }
    
    return 0;
}