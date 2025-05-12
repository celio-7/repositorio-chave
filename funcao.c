#include <stdio.h>
#include <stdlib.h>

void cabecalho();
void rodape ();
int le_valida_n1();
int le_valida_n1();
char le_valida_op();
int soma (int n1, int n2);
int sub (int n1, int n2);
int mult (int n1, int n2);
int dv (int n1, int n2);

int main() {
	int n1,n2;
	char op,sair;
do{	
	cabecalho();
	n1 = le_valida_n1();
	op = le_valida_op();
	n2 = le_valida_n2();
	
	switch(op){
		case'+':
			printf("Resultado: %d\n",soma(n1,n2));
		break;
		case'-':
			printf("Resultado: %d\n",sub(n1,n2));
		break;
		case'*':
			printf("Resultado: %d\n",mult(n1,n2));
		break;
		case'/':
			printf("Resultado: %d\n",dv(n1,n2));
		break;
	}
		printf("Deseja sair? (S/N) ");
		scanf(" %c",&sair);
		if(sair == 's' || sair == 'S'){
			printf("Programa Encerrado\n");
		}
	}while(sair == 'n' || sair == 'N');
	rodape();
	
	return 0;
}

void cabecalho(){
	system("cls");
	printf("=========\n");
	printf("SUPER CALC 2025\n");
	printf("=========\n");
}

void rodape(){
	printf("=========\n");
	printf("Copyright 2025\n");
	printf("=========\n");
}

int le_valida_n1(){
	int n1 = 0;
	
	do{
		printf("Digite o N1 (0 a 10): ");
		scanf("%d",&n1);
		if(n1 < 0 || n1 > 10){
			printf("O numero deve estar entre 0 e 10\n");
		}
	}while(n1 < 0 || n1 > 10);
}

int le_valida_n2(){
	int n2 = 0;
	
	do{
		printf("Digite o N2 (0 a 10): ");
		scanf("%d",&n2);
		if(n2 < 0 || n2 > 10){
			printf("O numero deve estar entre 0 e 10\n");
		}
	}while(n2 < 0 || n2 > 10);
}

char le_valida_op(){
	char op=0;
	
	do{
		printf("Digite a operação ( + - * /): ");
		scanf(" %c",&op);
		if(op != '+' && op != '-' && op != '*' && op != '/'){
			printf("A operacao deve ser + ou - ou * ou /");
		}
	}while(op != '+' && op != '-' && op != '*' && op != '/');
}

int soma(int n1, int n2){
	int resultado = 0;
	resultado = n1 + n2;
	return resultado;
}

int sub(int n1, int n2){
	int resultado = 0;
	resultado = n1 - n2;
	return resultado;
}

int mult(int n1, int n2){
	int resultado = 0;
	resultado = n1 * n2;
	return resultado;
}

int dv(int n1, int n2){
	do{
	int resultado = 0;
	resultado = n1 / n2;
	return resultado;
	}while(n2!=0);
		printf("Nao existe divisao por 0");
}
