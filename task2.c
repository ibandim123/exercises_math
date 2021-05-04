#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Vetor de 7 posições */
int ru[7], i, somaRU;

int main(void) {
	
  //Fazer entender língua Portuguesa	
   setlocale(LC_ALL, "Portuguese");
  
   printf("######### Olá, vamos criar seu RU de 7 dígitos ######### \n");
   printf("==\n");
  /* ===== Digitar valores abaixo, alocando cada dígito no vetor ===== */
   //Só é permitido um dígito dentro de cada espaço do vetor
   for (i = 0; i < 7; i++ ) {
  	printf("######### Digite os números que deseja em seu RU ######### \n");
  	scanf_s("%1d",&ru[i]);
  	
  } 
  
  /* =====  Mostrar em Tela o RU do usuário =====  */
   printf("######### Mostrar seu RU ######### \n");
   for (i = 0; i < 7; i++) {
   	printf(" RU:[%d]= %d", i, ru[i]);
  
      	
   }
  /*  =====  Mostrar a soma de cada índice do RU ===== */
   for (i = 0; i < 1; i++) {

   	somaRU = ru[0]+ ru[1]+ ru[2]+ru[3]+ru[4]+ru[5]+ru[6];

   	int resultado = somaRU;
   	  
   	printf("\n resultado da soma de cada elemento do seu RU: %d", resultado);
   	printf("\n Seu RU: %d.%d.%d.%d.%d.%d.%d.",ru[0],ru[1],ru[2],ru[3],ru[4],ru[5],ru[6]);
   }
 
 

  free(ru);
     
  return 0;
};
 
