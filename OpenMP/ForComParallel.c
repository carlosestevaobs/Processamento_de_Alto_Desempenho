#include <stdio.h>
#include <omp.h>

int main() {
	int n = 5;
	int z[100];
	int a = 2;
	int x[100];
	int y = 3;
	omp_set_num_threads(4);

	#pragma omp parallel
	int x1 = (omp_get_threads_num() + 1) * (n/omp_get_max_threads());
	int x0 = 0;
	if (((omp_get_threads_num() + 1) > 1)) {
		x0 = (omp_get_threads_num()) * (n/omp_get_max_threads());
	}
	for (int i = 0; i < n; i++) {
		z[i] = a * x[i] + y;
		 printf("%d --> Hello World! \n",omp_get_thread_num());
	}



}
