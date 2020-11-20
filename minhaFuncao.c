#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>
#include "minhaBiblioteca.h"

void menu(){
	char opc;
	for(;;){
	printf("\n===================MENU==================="
			"\nA - Inserir"
			"\nB - Excluir"
			"\nC - Relatórios"
			"\nD - Finalizar"
			"\nEscolha uma opção: ");
		do{
			scanf("%c",&opc);
			getchar();
			opc = toupper(opc);
				if(opc != 'A' && opc != 'B' && opc != 'C' && opc != 'D' ){
					printf("\nDigite as opções do MENU!!: ");
				}
		}while(opc != 'A' && opc != 'B' && opc != 'C' && opc != 'D');
		
			switch(opc){
			case 'A': 
	
			break;
	
			case 'B': 
		
			break;
			
			case 'C': 
		
			break;
		
		}
		
		if(opc =='D'){
			printf("\nSAIU DO PROGRAMA");
			break;
		}
	}
	
}
