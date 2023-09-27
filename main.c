#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "menu.h"
#include "arquivo.h"

//opções
#define CRIAR_PASTA 1

int main(){
	srand(time(NULL));
	//chamar apenas na primeira execução
	if (CRIAR_PASTA){
		cria_pastas();
	}
	
	executa();
	return 0;
}
