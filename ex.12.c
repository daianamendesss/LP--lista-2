#include<stdio.h>

int main(){
	int n,m,l,c;
  char opcao[1];

	printf("\nDigite o numero de linhas:\n");
	scanf("%d",&n);
	printf("\nDigite o numero de colunas:\n");
	scanf("%d",&m);
	
	float matriz[n][m];
  float matriz2[n][m];

	printf("\nDigite os valores da primeira matriz :\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz1[%d][%d]=",l,c);
			scanf("%f",&matriz[l][c]);
			
		}
	}
	
	printf("\nA primeira matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%f  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\nDigite os valores da segunda matriz :\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz[%d][%d]=",l,c);
			scanf("%f",&matriz2[l][c]);
			
		}
	}
	
	printf("\nA segunda matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%f  ",matriz2[l][c]);
		}
		printf("\n");
	}
	
  printf("\n----------------\n\n");

  printf("\nQual operacao deseja fazer?\n");
	printf("A - Somar as duas matrizes\nB - Subtrair a primeira matriz da segunda\nC - Adicionar uma constante as duas matrizes\nD - Imprimir as matrizes.\n\n");

  scanf("%s",&opcao[0]);

 
  switch(opcao[0]){
    case 'a':
      for(l=0;l<n;l++){
	    	for(c=0;c<m;c++){
	      		printf("%f  ",matriz2[l][c]+matriz[l][c]);
	      }
	      	printf("\n");
	    }

        printf("\n");
        break;
    case 'b':
      for(l=0;l<n;l++){
	    	for(c=0;c<m;c++){
	      		printf("%f  ",matriz[l][c]-matriz2[l][c]);
	      }
	      	printf("\n");
	    }

      printf("\n");
      break;
    case 'c':
    printf("\nDigite uma constante:\n");
    float constante;
    scanf("%f",&constante);
      for(l=0;l<n;l++){
	    	for(c=0;c<m;c++){
	      		matriz[l][c]=matriz[l][c]+constante;
            matriz2[l][c]=matriz2[l][c]+constante;
	      }
	      	printf("\n");
	    }

      printf("\n\nMatriz 1:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%f  ",matriz[l][c]);
        }
        printf("\n");
      }
      printf("\n\nMatriz 2:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%f  ",matriz2[l][c]);
        }
        printf("\n");
      }

      printf("\n");
      break;
    case 'd':
      printf("\n\nMatriz 1:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%f  ",matriz[l][c]);
        }
        printf("\n");
      }
      printf("\n\nMatriz 2:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%f  ",matriz2[l][c]);
        }
        printf("\n");
      }
    break;

  }

    return 0;
}
