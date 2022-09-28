#include<stdio.h>

int main(){
	
	int n,m,x,l,c,cont=0;
	printf("\nDigite o numero de linhas:\n");
	scanf("%d",&n);
	printf("\nDigite o numero de colunas:\n");
	scanf("%d",&m);
	printf("\nDigite um numero:\n");
	scanf("%d",&x);
	
	int matriz[n][m];
	
	printf("\nDigite os valores da matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			if(matriz[l][c]>x){
				cont++;
			}
		}
	}
	
	printf("\nA matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
	printf("\nExistem %d numeros maiores que %d.",cont,x);
	
    return 0;
}
