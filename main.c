#include <stdio.h>

void exercicioUm(){
    int a,b,c;

    printf("Digite 3 numeros inteiros:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("$d",&c);

    printf("O primeiro numero foi:%d\nO segundo foi %d\n O terceiro numero foi %d\n",a,b,c);
}



void main() {
    int resposta;

    printf("Exercicios 1 ate 50 (part1)\n\n");
    printf("1 - Escrever um programa que permita ao usuario digitar tres números inteiros e os imprima:\n");
    printf("\nDigite qual execercicio deseja:");
    scanf("%d",&resposta);

    switch(resposta){

        case 1:
            exercicioUm();
            break;

    }

}
