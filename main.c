#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 50


int main() {
	
	int i=0,tamanho1=0,tamanho2=0;
	char name1[tam],name2[tam];
	
	printf("Digite o 1 nome: ");
	scanf("%[^\n]s",&name1);
	fflush(stdin);
	
	printf("Digite o 2 nome: ");
	scanf("%[^\n]s",&name2);
	fflush(stdin);
	
	printf("--------------------\n");
	
	//Pneumoultramicroscopicossilicovulcanoconiótico
	
	tamanho1=strlen(name1);
	tamanho2=strlen(name2);
	
	if(tamanho1>tamanho2){
		printf("Menor nome informado: %s\n",name2);
		printf("--------------------\n");
		printf("Tamanho do 1: %d\n",tamanho1);
		printf("Tamanho do 2: %d\n",tamanho2);
	}else if(tamanho2>tamanho1){
		printf("Menor nome informado: %s\n",name1);
		printf("--------------------\n");
		printf("Tamanho do 1: %d\n",tamanho1);
		printf("Tamanho do 2: %d\n",tamanho2);
	}else if(tamanho1==tamanho2)
		printf("Os dois nomes tem o mesmo tamanho!\n");
		printf("--------------------\n");
		printf("Tamanho do 1: %d\n",tamanho1);
		printf("Tamanho do 2: %d\n",tamanho2);

	
/*	printf("--------------------\n");
	
	printf("Tamanho: %d\n",tamanho);
	
	printf("--------------------\n");
	
	printf("Nome digitado: ");

	for(i=tamanho-1;i>=0;i--){
		printf("%c",name[i]);
	}
	*/
	return 0;
}
