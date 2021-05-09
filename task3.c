#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//int ru[4];
int valor, A, B, C, D, E, F, G, H, I, J, L, M;

//Fazer função calc_soma
//Fazer lógica de  N < 0 fim do programa. Só aceitar valores positivos.




int main()  {
	
	//Fazer entender língua Portuguesa	
   	
	   setlocale(LC_ALL, "Portuguese");
   	
	//Apresentação
   	
	   printf("######### Vamos calcular a soma de duas matrizes: ######### ");
   	//OBS: Entrar dados inteiros positivos no máximo 2 algarismos
	// Entrada de valores da Matriz A
    printf("\n Entre com valores da Matriz A, seguindo por linha x Coluna ");
	signed char matrizA[2][2] = { A, B, C, D }; 
	signed char matrizB[2][2] = { E, F, G, H }; 
	signed char matrizC[2][2] = { I, J, L, M };	
	
	
	
	
    for ( A = 0; A <= 1; A ++) {
      printf("\n digite aqui:");
      scanf("  %d",&A);
    }
    for ( B = 0; B <= 1; B ++) {
      printf("\n digite aqui:");
      scanf("  %d",&B);
	}
    for ( C = 0; C <= 1; C ++) {
      printf("\n digite aqui:");
      scanf("  %d",&C);
	}
	for (D = 0; D <= 1; D ++) {
      printf("\n digite aqui:");
      scanf("  %d",&D);
    }
    // Entrada de valores da Matriz B
    for ( E = 0; E <= 1; E ++) {
      printf("\n digite aqui:");
      scanf("  %d",&E);
    }
    for ( F = 0; F <= 1; F ++) {
      printf("\n digite aqui:");
      scanf("  %d",&F);
	}
    for ( G = 0; G <= 1; G ++) {
      printf("\n digite aqui:");
      scanf("  %d",&G);
	}
	for (H = 0; H <= 1; H ++) {
      printf("\n digite aqui:");
      scanf("  %d",&H);
    }
printf("\n");	

	for ( I = 0; I <=1;  ) {
		 I = A + E ;
	}
	for ( J = 0; J <=1;  ) {
		 J = B + F ;
	}
	for ( L = 0; L <=1;  ) {
		 L = C + G;
	}
	for ( M = 0; M <=1;  ) {
		 M = D + H;
	}

    // Mostrar Matrizes na tela     
printf("MatrizA = "); printf("|"); printf(" %d",A ); printf("  "); printf(" %d ", B); printf("| \n");
printf("          "); printf("| ");  printf("%d",C ); printf("  "); printf(" %d ", D); printf("|");
printf("\n");	
printf("\n");		
printf("MatrizB = "); printf("|"); printf(" %d",E ); printf("  "); printf(" %d ", F); printf("| \n");
printf("          "); printf("| ");  printf("%d",G ); printf("  "); printf(" %d ", H); printf("|");
printf("\n");		
	//Fazer o cálculo A4x4 + B4x4 = C4x4, sendo cada elemento com sua respectiva posição.	     
    printf(" O resultado foi: \n");
    
printf("\n");	
printf("MatrizC = "); printf("|"); printf(" %d",I ); printf("  "); printf(" %d ", J); printf("| \n");
printf("          "); printf("| ");  printf("%d",L ); printf("  "); printf(" %d ", M); printf("|");


       
   	//Imprimir a matrizC4x4 no terminal
	//Encerrar o programa.



  //free();

  return 0;
}
		
	

   	

	

 
   	
