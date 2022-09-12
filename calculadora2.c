#include<stdio.h>

void main (){

printf("Insira o primeiro numero para realizarmos a operacao\n");

float operador1, operador2, salvo;
char operacao;

scanf("%f", &operador1);

printf("Digite a operacao que você deseja realizar\n");

scanf(" %c", &operacao);

printf("Por fim, digite o ultimo numero para realizarmos a operacao\n");

scanf("%f", &operador2);

if(operacao=='+'){
    salvo=operador1+operador2;
}

else if(operacao=='-'){
    salvo=operador1-operador2;
}

else if(operacao=='*'){
    salvo=operador1*operador2;
}

else if(operacao=='/'){
    salvo=operador1/operador2;
}

printf("O resultado foi: %f", salvo);
}