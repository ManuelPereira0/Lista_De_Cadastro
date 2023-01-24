#include <stdio.h>
int main()
{
    int i;
    
    struct fichas
    {
        char nome[50];
        char endereco[30];
        int telefone;
        int idade;
    };
    struct fichas ficha;
    printf("\tCadastro de pessoas\n\n");
    printf("Digite seu nome: ");
    scanf("%s",ficha.nome);
    printf("Digite o seu endereço: ");
    scanf("%s",ficha.endereco);
    printf("Digite seu telefone: ");
    scanf("%d",&ficha.telefone);
    printf("Digite a sua idade: ");
    scanf("%d",&ficha.idade);
    printf("Seu nome é %s\n",ficha.nome);
    printf("Você mora na %s\n",ficha.endereco);
    printf("O seu telefone é %d\n",ficha.telefone);
    printf("Você tem %d anos\n",ficha.idade);
}
testando