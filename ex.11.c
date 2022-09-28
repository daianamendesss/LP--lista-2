#include<stdio.h>
#include<stdlib.h>

int main(){
	int n=0,m=0,l,c,e;
  
 
	printf("\nDigite o número de linhas:\n");
	scanf("%d",&n);
  printf("\nDigite o número de colunas:\n");
  scanf("%d",&m);
  printf("\nDigite o numero que vai multiplicar a matriz:\n");
  scanf("%d",&e);

	
	
	int matriz[n][m];
	
	printf("\nDigite os valores da matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz1[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			
		}
	}
	
	printf("\nA matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\n\nA matriz multiplicada sera: \n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      printf("%d ",matriz[l][c]*e);
		}
    printf(" \n");
	}

    return 0;
}
