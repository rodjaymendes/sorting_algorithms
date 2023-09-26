#include "funcoes.h"
#include <string.h>

int menu_algoritmo(){
	int op = 0;
	printf("--------MENU--------\n");
	printf("1 - INSERTION SORT\n");
	printf("2 - BUBBLE SORT\n");
	printf("3 - SHELL SORT\n");
	printf("4 - SELECTION SORT\n");
	printf("0 - SAIR\n");
	printf("--------------------\n");
	scanf("%d",&op);
	return op;
}
int menu_ordem(){
	int op = 0;
	printf("-------ORDEM--------\n");
	printf("1 - CRESCENTE\n");
	printf("2 - DECRESCENTE\n");
	printf("3 - ALEATORIA\n");
	printf("0 - SAIR\n");
	printf("--------------------\n");
	scanf("%d",&op);
	return op;
}
int menu_instancia(){
	int op = 0;
	printf("-----INSTANCIA------\n");
	printf("1 - 10\n");
	printf("2 - 100\n");
	printf("3 - 1 000\n");
	printf("4 - 10 000\n");
	printf("5 - 100 000\n");
	printf("6 - 1 000 000\n");
	printf("0 - SAIR\n");
	scanf("%d",&op);
	return op;
}

int executa(){
	int ordem = 0;
	int instancia = 0;
	int op_algoritmo;
	char nome_algoritmo[32] = {""};
	


	


	op_algoritmo = menu_algoritmo();
	switch(op_algoritmo){
		case 0:
			return 0;
		break;
		
		case 1:
			strcpy(nome_algoritmo, "insertion_sort");
		break;
		
		
		case 2:
			strcpy(nome_algoritmo, "bubble_sort");
		break;
		
		case 3:
			strcpy(nome_algoritmo, "shell_sort");
		break;
		
		case 4:
			strcpy(nome_algoritmo, "selection_sort");
		break;
		
		default:
			printf("   OPCAO INVALIDA!  \n");
			executa();
		
	}
	
	ordem = menu_ordem();
	switch(ordem){
		case 0:
			return 0;
		break;
		
		case 1:
			ordem = 1;
		break;
		
		case 2:
			ordem = 2;
		break;
		
		case 3:
			ordem = 3;
		break;
		default:
			printf("   OPCAO INVALIDA!  \n");
			executa();
	}
	
	
	instancia = menu_instancia();
	
		switch(instancia){
		case 0:
			return 0;
		break;
		
		case 1:
			instancia = 1;
		break;
		
		case 2:
			instancia = 2;
		break;
		
		case 3:
			instancia = 3;
		break;
		
		case 4:
			instancia = 4;
		break;
		
		case 5:
			instancia = 5;
		break;
		
		case 6:
			instancia = 6;
		break;

		default:
			printf("   OPCAO INVALIDA!  \n");
			executa();
	}
	
	for (int i=1; i<5; i++){
		for (int j = 1; j < 4; j++){
			ordena(nome_algoritmo, j, i, op_algoritmo);
		}
	}

	executa();
	return 0;
}

