//linux
int cria_pasta(char * algoritmo){
	char str[256];
	sprintf(str, "mkdir %s && cd %s && mkdir entradas saidas tempo && cd .. && cd ./%s/entradas && mkdir crescentes decrescentes aleatorias", algoritmo, algoritmo, algoritmo);
	system(str);
	sprintf(str, "cd %s && cd saidas && mkdir crescentes decrescentes aleatorias", algoritmo);
	system(str);
	
}

int cria_pastas(){
	cria_pasta("insertion_sort");
	cria_pasta("bubble_sort");
	cria_pasta("shell_sort");
	cria_pasta("selection_sort");

}
