#include<stdio.h>

float media; 
float nota1, nota2;
float presenca;

float validar_nota(nota){
    float nota_aux = nota;

    while(nota_aux<0 || nota_aux>10){
        printf("O valor digitado deve ser entre 0 e 10.\n");
        printf("Digite a nota novamente: ");
        scanf("%f", &nota_aux);
    }

    return nota_aux;
}

float calcular_media(){
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    nota1 = validar_nota(nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    nota2 = validar_nota(nota2);

    media = (nota1+nota2)/2;
    printf("A media do usuario e: %.1f\n", media);

    return media;
}

int situacao_academica(media) {
    printf("Digite a presenca do aluno: ");
    scanf("%f", &presenca);
    while(presenca<0 || presenca>10){
        printf("O valor digitado deve ser entre 0 e 100.\n");
        printf("Digite a presenca novamente: ");
        scanf("%f", &presenca);
    }
    
    if(!media){
        printf("Media não calculada");
        return 0;
    }

    if (media >= 6 && presenca >= 75) {
        printf("Aluno aprovado com media e presenca");
    } else if (media < 6 && presenca >= 75) {
        printf("Aluno reprovado por media");
    } else if (media >= 6 && presenca < 75) {
        printf("Aluno reprovado por presenca");
    } else {
        printf("Aluno reprovado por media e presenca");
    }
    return 1;
}

int main() {
    

    
    return 0;
}