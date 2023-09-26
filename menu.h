#include "funcoes.h"
char vetor_ordens[4][16] = {"", "crescentes", "decrescentes", "aleatorias"};
int vetor_instancias[7] = {0, 10, 100, 1000, 10000, 100000, 1000000};
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
	//executa o menu
	int algoritmo = menu_algoritmo();
	int ordem = 0;
	int instancia = 0;
	switch(algoritmo){
		case 0:
			return 0;
		break;
		case 1:
			//printf("   INSERTION SORT   \n");
			//gera os arquivos de entrada
			ordem = menu_ordem();
			instancia = menu_instancia();
			char arquivo_entrada[256];
			char arquivo_saida[256];
			sprintf(arquivo_entrada, "./insertion_sort/entradas/%s/%d.txt",vetor_ordens[ordem], vetor_instancias[instancia]);
			sprintf(arquivo_saida, "./insertion_sort/saidas/%s/%d.txt",vetor_ordens[ordem], vetor_instancias[instancia]);
			printf("%s\n",arquivo_saida);
			printf("Gerando arquivos de entrada em \"%s\"...\n",arquivo_entrada);
			gera_entrada(arquivo_entrada, ordem, vetor_instancias[instancia]);
			printf("finalizado!\n");
			ordenar_arquivo(vetor_instancias[instancia], arquivo_entrada, arquivo_saida, ordem);
			

			
		break;
		default:
			printf("   OPCAO INVALIDA!  \n");
		
	}
	executa();
	return 0;
}

