#include<stdio.h>

float media; 
float nota1, nota2; 

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


int main() {
    

    
    return 0;
}