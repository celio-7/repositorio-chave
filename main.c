#include <stdio.h>

int main() {
	
	int idade=0;
	
	printf("----PROGRAMA ELEITORAL----\n\n");
	
	printf("Digite sua Idade: ");
	scanf("%d",&idade);
	
	if(idade==84){
		printf("\nGanha premio Premium com necessidade de votar");
	}else{
		if(idade==45){
			printf("\nGanha premio TOP sem necessidade de votar");
		}else{
			if(idade<0){
				printf("\nNao Nasceu");
			}else{
				if(idade>0>15){
					printf("\nNao vota");
				}else{
					if(idade>=16<=17){
						printf("\nPara voce e opcional o voto");
				}else{
					if(idade>18<65){
						printf("\nVoce tem a Obrigatoriedade de Votar");
					}else{
						if(idade>18<65){
							printf("\nVoce tem a Obrigatoriedade de Votar");
						}else{
							if(idade>=65){
								printf("\nPara voce e opcional o voto");
								}
							}
						}
					}
				}
			}
		}
	}


	return 0;
}

