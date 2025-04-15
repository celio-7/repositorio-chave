#include <stdio.h>

int main() {
	
	int numero=0,i=0;
	char simb;
	
	printf("=====Casa da Tabuada=====\n\n");
	
	printf("Informe a casa que deseja contar: ");
	scanf("%d",&numero);
	
	printf("Informe a operacao: ");
	scanf(" %c",&simb);
	
	for(i=1; 9>=i; i++){	
		switch(simb){
			case '+':
				printf("%d + %d = %d\n ",numero,i,numero+i);			
			break;
			
			case '-':
				printf("%d - %d = %d\n",numero,i,numero-i);
			break;
			
			case '*':
				printf("%d x %d = %d\n",numero,i,numero*i);
			break;		
	
			default:
				printf("Digite uma operacao valida");
				return 0;		
		}	
	}
			
return 0;

}	
