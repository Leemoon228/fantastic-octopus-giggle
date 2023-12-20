#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 11
void countElementInRangeForArray(int x, int y) {
    int array[SIZE];
    int count = 0;
    srand(time(NULL));
    printf("Array contains: ");
    for (int i = 0; i < SIZE; i++) {
        array[i] = (rand() % (50 + 50 + 1)) - 50;
        printf("%d ", array[i]);
        if ((array[i] > x) && (array[i] < y))
            count += array[i];
    }
    printf("\nSumm of elements in range [%d, %d] equals %d \n", x, y, count);
}