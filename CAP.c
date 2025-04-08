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
	
	if(simb == '+'){
		printf("O resultado da sua soma e: %.1f ",n1+n2);
	}else{
		if(simb == '*'){
			printf("O resultado da sua multiplicacao e: %.1f",n1*n2);
		}else{
			if(simb == '-'){
				printf("O resultado da sua subtracao e: %.1f",n1-n2);
			}else{
				if(simb== '/'){
					printf("O resultado da sua divisao e: %.1f",n1/n2);
				}else{
					printf("Digite um operador existente");
				}
			}
		}
	}

	return 0;
}

