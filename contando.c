#include <stdio.h>

int main() {
	
	int numero,contar;
	
	printf("Ate quanto voce quer contar: ");
	scanf("%d",&contar);
	
	for(numero=1;numero<=contar;numero ++){
		if(numero % 2 == 0){
			printf("\n%d PAR",numero);
		}else{
			printf("\n%d IMPAR",numero);
		}
	}
	
	return 0;
}
