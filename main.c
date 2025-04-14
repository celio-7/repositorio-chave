#include <stdio.h>

int main() {
	
	float n1,n2;
	char simb;

	printf("----MASTER CALC 2025 PRO----\n\n");
	printf("+\t-\t*\t/\t\t\t\t\n\n");

	printf("Digite seu N1: ");
	scanf("%f",&n1);
	
	printf("Digite seu operador: ");
	scanf(" %c",&simb);
	
	printf("Digite seu N2: ");
	scanf("%f",&n2);
	
	switch(simb){
		case '+':
			printf("O resultado da sua soma e: %.1f\n",n1+n2);
		break;
		
		case'-':
			printf("O resultado da sua subtracao e: %.1f\n",n1-n2);
		break;
		
		case '*':
			printf("O resultado da sua multiplicacao e: %.1f\n",n1*n2);
		break;
		
		case '/':
			if(n2==0){
				printf("Nao existe divisao por 0\n");
			}else{
				printf("O resultado da sua divisao e: %.1f\n",n1/n2);
			}
		break;
		
		default:
			printf("Digite um operador existente\n");	
					
	}
	return 0;
}

