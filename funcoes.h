#include "algoritmos.h"

void gera_entrada(char * arquivo, int ordem, int n){
	FILE *pt_arquivo;
	pt_arquivo = fopen(arquivo, "w");
	//crescente
	if (ordem == 1){
		for (int i=0; i<n; i++){
			fprintf(pt_arquivo, "%d\n", (i));
			
		}
	}
	
	//decrescente
	if (ordem == 2){
	
		pt_arquivo = fopen(arquivo, "w");
		for (int i=n; i>0; i--){
			fprintf(pt_arquivo, "%d\n", (i));
			
		}
	
	}
	
	//aleatorio
	if(ordem == 3){
	
		for (int i=0; i<n; i++){
			int aleatorio;
			aleatorio = rand() % n;

			fprintf(pt_arquivo, "%d\n", (aleatorio));
			
		}
	
	}
	fclose(pt_arquivo);
}



//entradas de dados
//retorna um array com os valores de um arquivo
//10
int * arquivo_para_array_10(char * arquivo){
	FILE *pt_arquivo;
	pt_arquivo = fopen(arquivo, "r");
	static int array[10];
	int i;
	for (i = 0; i < 10; i++){
		fscanf(pt_arquivo, "%d,", &array[i] );
	}
	fclose(pt_arquivo);
	return array;
}

//100
int * arquivo_para_array_100(char * arquivo){
	FILE *pt_arquivo;
	pt_arquivo = fopen(arquivo, "r");
	static int array[100];
	int i;
	for (i = 0; i < 100; i++){
		fscanf(pt_arquivo, "%d,", &array[i] );
	}
	fclose(pt_arquivo);
	return array;
}

//1000
int * arquivo_para_array_1000(char * arquivo){
	FILE *pt_arquivo;
	pt_arquivo = fopen(arquivo, "r");
	static int array[1000];
	int i;
	for (i = 0; i < 1000; i++){
		fscanf(pt_arquivo, "%d,", &array[i] );
	}
	fclose(pt_arquivo);
	return array;
}

//10000
int * arquivo_para_array_10000(char * arquivo){
	FILE *pt_arquivo;
	pt_arquivo = fopen(arquivo, "r");
	static int array[10000];
	int i;
	for (i = 0; i < 10000; i++){
		fscanf(pt_arquivo, "%d,", &array[i] );
	}
	fclose(pt_arquivo);
	return array;
}

//100000
int * arquivo_para_array_100000(char * arquivo){
	FILE *pt_arquivo;
	pt_arquivo = fopen(arquivo, "r");
	static int array[100000];
	int i;
	for (i = 0; i < 100000; i++){
		fscanf(pt_arquivo, "%d,", &array[i] );
	}
	fclose(pt_arquivo);
	return array;
}

//1000000
int * arquivo_para_array_1000000(char * arquivo){
	FILE *pt_arquivo;
	pt_arquivo = fopen(arquivo, "r");
	static int array[1000000];
	int i;
	for (i = 0; i < 1000000; i++){
		fscanf(pt_arquivo, "%d,", &array[i] );
	}
	fclose(pt_arquivo);
	return array;
}


//ordena arquivo
float ordenar_arquivo(int n, char * diretorio_entrada, char * diretorio_saida, int tipo){
	int * array;
	char * nome_saida;
	char * tipo_ord;


	switch(tipo){
		case 1:
			tipo_ord = "crescentes/";
		break;
		case 2:
			tipo_ord = "decrescentes/";
		break;
		case 3:
			tipo_ord = "aleatorias/";
		break;
		default:
			tipo_ord = "aleatorias/";
		}



	switch(n){
    		case 10:
			array = arquivo_para_array_10(diretorio_entrada);
    			nome_saida = "10.txt";
    		break;
    		
    		case 100:
			array = arquivo_para_array_100(diretorio_entrada);
			nome_saida = "100.txt";
    		break;
    		
      		case 1000:
			array = arquivo_para_array_1000(diretorio_entrada);
	    		nome_saida = "1000.txt";
    		break;
    		
       		case 10000:
			array = arquivo_para_array_10000(diretorio_entrada);
    			nome_saida = "10000.txt";
    		break;
    		
       		case 100000:
			array = arquivo_para_array_100000(diretorio_entrada);
    			nome_saida = "100000.txt";
    		break;
    		
       		case 1000000:
			array = arquivo_para_array_1000000(diretorio_entrada);
    			nome_saida = "1000000.txt";
    		break;
    		default:
			array = arquivo_para_array_10(diretorio_entrada);
    			nome_saida = "10.txt";
    	}
	
	//ordenação

   	insertion_sort(array, n);
	for (int i = 0; i < n; i++){
		printf("%d\t",array[i]);
	}
	


	//gerando arquivo de saida
   	FILE *pt_arquivo;
	pt_arquivo = fopen(diretorio_saida, "w");
	for (int i=0; i<n; i++){
		fprintf(pt_arquivo, "%d\n", array[i]);
	}
	fclose(pt_arquivo);

   	
	return 0;
	
}

