#include <stdio.h>

int main()
{
	int torre = 5;
	int bispo = 5;
	int rainha = 8;

	//movimento da torre
	printf("Movimento da Torre:\n");
	printf("T");
	for(int i=0;i<torre;i++){
		printf(" >> direita");
	}
	
	//movimento do Bispo
	
	printf("\nMovimento do Bispo:\n");
	int mbispo = bispo;
	printf("B");
	while(mbispo>1){
		printf(" >> Cima >>");
		printf("Direita");
		mbispo--;
	}
	
	//movimento da rainha
	printf("\nMovimento da Rainha\n");
	printf("R");
	do{
		printf("<<Esquerda");
		rainha--;
	}while(rainha >0);
	printf("\n");

	return 0;
}
