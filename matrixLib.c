#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 4
#define COLUMN 11
void countElementInRangeForMatrix(int x, int y) {
    int array[ROWS][COLUMN];
    srand(time(NULL));
    printf("Matrix contains: \n");
    int count = 0;
        for (int i = 0; i < ROWS; i++){
            for (int j = 0; j < COLUMN; j++) {
                array[i][j] = (rand() % (50 + 50 + 1)) - 50;
                printf("%d\t", array[i][j]);
                if ((array[i][j] > x) && (array[i][j] < y))
                    count += array[i][j];
            }
             printf("\n");
        }
    printf("Summ of elements in range [%d, %d] equals %d \n", x, y, count);           
}