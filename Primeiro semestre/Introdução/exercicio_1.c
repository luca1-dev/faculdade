#include <stdio.h>
 
void main() {
    char nome_aluno[50], sobrenome_aluno[50];
    int idade, matricula;
    float altura;

    printf("Olá, seja bem vindo ao portal do aluno!\n");
    printf("Digite suas informações abaixo.\n\n");
    
    printf("Digite seu nome: ");
    scanf("%s", nome_aluno);

    printf("%s, digite o seu sobrenome: ", nome_aluno);
    scanf(" %s", sobrenome_aluno);

    printf("Digite a sua idade: ");
    scanf(" %d", &idade);

    printf("Digite a sua altura: ");
    scanf(" %f", &altura);
    
    printf("Digite a sua matricula: ");
    scanf(" %d", &matricula);

    printf("\nSejá bem vindo ao portal %s %s.\n", nome_aluno, sobrenome_aluno);
    printf("Informações:\n");
    printf("Nome: %s %s\n", nome_aluno, sobrenome_aluno);
    printf("Matricula: %i\n", matricula);
    printf("Idade: %i\n", idade);
    printf("Altura: %.2f\n", altura);
}