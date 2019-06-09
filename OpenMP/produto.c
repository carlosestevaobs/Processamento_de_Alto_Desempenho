#include <stdio.h>
#include <time.h>
#include <omp.h>


int main() {
	
	clock_t ini = clock();
	omp_set_num_threads(2);
	int tamanho = 10000, i, vetorA[tamanho], vetorB[tamanho], produto;
	int rand();
	
	for (i = 0; i < tamanho; i++) {
		vetorA[i] = 0 + rand() % 100;
		vetorB[i] = 0 + rand() % 100;
	}
	# pragma omp parallel for
	for (i = 0; i < tamanho; i++) {
		produto += vetorA[i] * vetorB[i];
	}
	
	printf("\n Produto: %d \n", produto);
	printf("\n Tempo em %f segundos \n", ((double) clock() - ini) /CLOCKS_PER_SEC); 


}
