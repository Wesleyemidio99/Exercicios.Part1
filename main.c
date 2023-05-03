#include <stdio.h>

void exercicioUm(){
    int a,b,c;

    system("cls");
    printf("Digite 3 numeros inteiros:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("O primeiro numero foi:%d\nO segundo numero foi %d\nO terceiro numero foi %d\n",a,b,c);
}


void exercicioDois(int a,int b){
    int adicao,subtracao,produto;
    float divisao;

    adicao = a+b;
    subtracao = a-b;
    produto = a*b;
    divisao = a/b;

    system("cls");
    printf("A Soma de %d e %d = %d\n",a,b,adicao);
    printf("A Subtracao de %d e %d = %d\n",a,b,subtracao);
    printf("A divisao de %d e %d = %f.5\n",a,b,divisao);
    printf("O produto de %d e %d = %d\n",a,b,produto);
}


void exercicioTres(){
    int f;
    float celsius;

    system("cls");
    printf("Digite um determinado grau em Fahrenheit (32-212):\n");
    scanf("%d",&f);

    celsius = 5.0/9.0 * (f-32.0);

    printf("O valor de %d fahrenheit para celsius = %.2f",f,celsius);

}

void exercicioQuatro(){
    int s,so,v,t;

    system("cls");
    printf("Digite a distancia inical:");
    scanf("%d",&so);
    printf("Digite a velocidade constante:");
    scanf("%d",&v);
    printf("Digite o tempo:");
    scanf("%d",&t);

    s = so+(v*t);

    printf("O espaco percorrido = %d",s);

}

void exercicioCinco(){
    int v,vo,a,t;

    system("cls");
    printf("Digite a velocidade inical:");
    scanf("%d",&vo);
    printf("Digite a aceleracao:");
    scanf("%d",&a);
    printf("Digite o tempo:");
    scanf("%d",&t);

    v = vo + (a*t);

    printf("A velocidade da particula = %d",v);
}

void main() {
    int resposta;

    printf("Exercicios 1 ate 50 (part1)\n\n");
    printf("1 - Escrever um programa que permita ao usuario digitar tres numeros inteiros e os imprima:\n");
    printf("2 - Escrever um programa que execute e imprima o resultado das operacoes de adicao, subtracao, divisao e produto entre dois numero decimais inicializados com 20 e 3.\n");
    printf("3 - Escrever um programa que permita ao usuario digitar um valor referente a um determinado grau Fahrenheit (32-212). Calcule a conversao deste grau em Celsius.\n");
    printf("4 - Escrever um programa que permite calcular o espaco percorrido por uma velocidade constante. \n");
    printf("5 - Sabendo que a aceleracao de uma particula e constante, escreva um programa que permita calcular a velocidade. \n");
    printf("Digite qual execercicio deseja:");
    scanf("%d",&resposta);

    switch(resposta){

        case 1:
            exercicioUm();
            break;

        case 2:
            exercicioDois(20,3);
            break;

        case 3 :
            exercicioTres();
            break;

        case 4:
            exercicioQuatro();
            break;

        case 5:
            exercicioCinco();
            break;
    }

}
