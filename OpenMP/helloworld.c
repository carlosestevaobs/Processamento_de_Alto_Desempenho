#include <stdio.h>

int main(int argc, char *argv[]) {
    int omp_set_num_threads();
    omp_set_num_threads(20);

    int omp_get_thread_num();

    #pragma omp parallel
    {
            printf("%d --> Hello World! \n",omp_get_thread_num());
    }
    return 0;
}
