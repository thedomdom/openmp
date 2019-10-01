#include <iostream>
#include <omp.h>

int main() {
#pragma omp parallel num_threads(4) default(none)
    {
        int ID = omp_get_thread_num();
        printf("hello(%d) ", ID);
        printf("world(%d) \n", ID);
    }
}
#pragma clang diagnostic pop