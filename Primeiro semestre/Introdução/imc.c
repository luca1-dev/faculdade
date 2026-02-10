#include <stdio.h>
#include <stdbool.h>

void main(){
    char nome[50];
    int idade;
    float altura, peso, imc;


    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    bool maiorDeIdade = idade >= 18;

    printf("Olá %s, de %d anos de idade. que pesa %2fkg e mede %.2fm de altura. \nSeu imc é: %.2f.", nome, idade, peso, altura, imc);
    
}