#include <stdio.h>
#include <omp.h>

int main() {
	int n = 5;
	int z[100];
	int a = 2;
	int x[100];
	int y = 3;
	// int omp_set_num_threads();
	    omp_set_num_threads(4);

	#pragma omp parallel for
	for (int i = 0; i < n; i++) {
		z[i] = a * x[i] + y;
		 printf("%d --> Hello World! \n",omp_get_thread_num());
	}



}
