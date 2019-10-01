#include <iostream>
#include <limits>

int critical() {
    int array_max = -std::numeric_limits<int>::max();
    int array_min = std::numeric_limits<int>::max();

    int array[5] = {16, 2, 77, 40, 12071};
    int i;

    for (i = 0; i < (int) (sizeof(array) / sizeof(array[0])); i++) {
        printf("array: %d \n", array[i]);

        if (array[i] > array_max) {
            array_max = array[i];
        }

        if (array[i] < array_min) {
            array_min = array[i];
        }

    }

    printf("min: %d \n", array_min);
    printf("max: %d", array_max);

    return(0);
}
