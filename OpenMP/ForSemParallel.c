#include <stdio.h>
#include <omp.h>

int main() {
	int n = 6;
	int z[100];
	int a = 2;
	int x[100];
	int y = 3;
	int i, inicio, fim;

	omp_set_num_threads(10);
	#pragma omp parallel
	{
		inicio = omp_get_thread_num();
		fim = omp_get_num_threads();
		int x1 = (inicio+1) * n/fim;
		int x0 = inicio * n/fim;

		for (i = x0; i < x1; i++) {
			z[i] = a * x[i] + y;
			printf("%d -->  Thread atual \n", omp_get_thread_num());
		}
	}
}

