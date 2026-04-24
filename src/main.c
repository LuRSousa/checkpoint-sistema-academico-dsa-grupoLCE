#include<stdio.h>
#include<math.h>

float media; 
float nota1, nota2;
float presenca;
float a, b, c;
int opcao;

int menu(){
    printf("\n==================\n");
    printf("\nSISTEMA EQUIPE LCE\n");
    printf("\n==================\n");

    printf("Selecione o que deseja fazer: \n1- Calcular Media \n2- Verificar Situacao do Aluno \n3- Calcular Derivada \n4- Sair \n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    while(opcao < 1 || opcao > 4){
        printf("\nValor Invalido! O valor deve estar entre 1 e 4.\n");
        printf("Selecione novamente o que deseja fazer: \n1- Calcular Media \n2- Verificar Situação do Aluno \n3- Calcular Derivada \n4- Sair \n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        printf("\n");
    }

    return opcao;
}

void calcular_derivada(){
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    float delta = b*b - 4*a*c;
 
    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        printf("Duas raizes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        float x1 = -b / (2*a);
        printf("Uma raiz real:\n");
        printf("x = %.2f\n", x1);
    }else{
        printf("Nao existem raizes reais.\n");
    }
}

float validar_nota(float nota){
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

int situacao_academica(float media) { 
    if(!media){
        printf("Media nao calculada");
        return 0;
    }
    
    printf("Digite a presenca do aluno: ");
    scanf("%f", &presenca);
    while(presenca<0 || presenca>100){
        printf("O valor digitado deve ser entre 0 e 100.\n");
        printf("Digite a presenca novamente: ");
        scanf("%f", &presenca);
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
    
int opcao_escolhida = menu();

    while(opcao_escolhida != 4){
        switch(opcao_escolhida){
            case 1:
                media = calcular_media();

                opcao_escolhida = menu();
            break;

            case 2:
                situacao_academica(media);

                opcao_escolhida = menu();
            break;

            case 3:
                calcular_derivada();

                opcao_escolhida = menu();
            break;
        }
    }

    printf("\n==============\n");
    printf("Sistema encerrado!");
    printf("\n==============\n");

    return 0;
}