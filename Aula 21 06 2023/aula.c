#include <stdio.h>
int main(){

    float nota1, nota2, nota3, nota4, media, exame, mediaAprovarExame;

    printf("Digite suas notas:");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 70){

        printf("A media do aluno foi de: %.2f \n", media);
        printf("APROVADO");

    }

    else if (media >= 40 && media < 70){

        printf("A media do aluno foi de: %.2f \n", media);
        printf("EXAME \n");

        printf("Quanto voce tirou no exame ? \n");
        scanf("%f", &exame);
        
        mediaAprovarExame = 100 - media; 

        if (exame >= mediaAprovarExame){

            printf("APROVADO");

        }
        else{

            printf("REPROVADO");

        }

    }

    else{

        printf("A media do aluno foi de: %.2f \n", media);
        printf("REPROVADO");

    }

    return 0;
}