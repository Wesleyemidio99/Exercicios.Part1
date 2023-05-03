#include <stdio.h>

void exercicioUm(){
    int a,b,c;

    printf("Digite 3 numeros inteiros:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("$d",&c);

    printf("O primeiro numero foi:%d\nO segundo foi %d\n O terceiro numero foi %d\n",a,b,c);
}


void exercicioDois(){
    int a = 20,b = 3,adicao,subtracao,produto;
    float divisao;

    adicao = a+b;
    subtracao = a-b;
    produto = a*b;
    divisao = a/b;

    printf("A Soma de %d e %d = %d\n",a,b,adicao);
    printf("A Subtracao de %d e %d = %d\n",a,b,subtracao);
    printf("A divisao de %d e %d = %f.5\n",a,b,divisao);
    printf("O produto de %d e %d = %d\n",a,b,produto);
}


void exercicioTres(){
    int f;
    float celsius;

    printf("\nDigite um determinado grau em Fahrenheit (32-212):\n");
    scanf("%d",&f);

    celsius = 5.0/9.0 * (f-32.0);

    printf("O valor de %d fahrenheit para celsius = %.2f",f,celsius);

}

void main() {
    int resposta;

    printf("Exercicios 1 ate 50 (part1)\n\n");
    printf("1 - Escrever um programa que permita ao usuario digitar tres números inteiros e os imprima:\n");
    printf("2 - Escrever um programa que execute e imprima o resultado das operacoes de adicao, subtracao, divisao e produto entre dois numero decimais inicializados com 20 e 3.\n");
    printf("Digite qual execercicio deseja:");
    scanf("%d",&resposta);

    switch(resposta){

        case 1:
            exercicioUm();
            break;

        case 2:
            exercicioDois();
            break;

        case 3 :
            exercicioTres();
            break;
    }

}
