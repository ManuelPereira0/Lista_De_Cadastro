#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float quadrado(int);
float triangulo (float, float);

int main()
{
    int opcao, lado;
    float base, altura;
    system("clear");
    printf("Calculo de área\n");
    printf("1. Calculo de quadrado\n");
    printf("2. Calculo de área de triangulo\n");
    printf("0. Sair\n");
    scanf("%d",&opcao);
    
    if(opcao == 1){
        printf("Lado do quadrado:");
        scanf("%d",&lado);
        quadrado(lado);
    }
    if(opcao == 2){
        printf("Base do triangulo:");
        scanf("%f",&base);
        printf("\n Altura do triangulo:");
        scanf("%f",&altura);
        triangulo (base,altura);
    }
    if(opcao == 0)return 0;
    
}
float triangulo (float base, float altura)
{
        int area;
        area = (base*altura)/2;
        printf("area =%f\n",(float)area);
}
    
float quadrado( int lado)
{
        printf("A área do quadrado de lado %d é: %d\n",lado,lado*lado);
}
    