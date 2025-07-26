#include <stdio.h>

void moveTorre(int n){
	if(n>0){
		printf("Direita\n");
		moveTorre(n-1);
	}
}

void moveBispo(int n){
	if(n>0){
		printf("Cima >> Direita\n");
		moveBispo(n-1);
	}
}

void moveRainha(int n){
	if(n>0){
		printf("Esquerda\n");
		moveRainha(n-1);
	}
}


int main()
{
	int torre = 5;
	int bispo = 5;
	int rainha = 8;

	//movimento da torre
	printf("Movimento da Torre:\n");
	moveTorre(torre);
	
	
	//movimento do Bispo
	
	printf("\nMovimento do Bispo:\n");
	moveBispo(bispo);
	
	//movimento da rainha
	printf("\nMovimento da Rainha\n");
	moveRainha(rainha);

	//movimento do cavalo
	printf("\nMovimento do Cavalo:\n");
	int ncasaCima=2;
	int ncasaDir =1;
	for(int i=0;i<ncasaDir;i++){
		for(int j=0;j<ncasaCima;j++){
			printf("Cima\n");
		}
		printf("Direita\n");
		
	}
	

	return 0;
}
