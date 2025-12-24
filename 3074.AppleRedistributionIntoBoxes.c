#include <stdio.h>
#include <stdlib.h>

// Estratégia, soma todas as maças, ordenar as caixas, selecionar da maior para a menor, até acabar as maças;
int qsortf(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int minimumBoxes(int *apple, int appleSize, int *capacity, int capacitySize)
{
    int sumApples = 0;
    int boxes = 0;

    for (int i = 0; i < appleSize; i++)
    {
        sumApples += apple[i];
    }
    qsort(capacity, capacitySize, sizeof(int), qsortf);

    while (sumApples > 0 && boxes < capacitySize)
    {
        sumApples -= capacity[boxes];
        boxes++;
    }
    return boxes;
}

int main(void)
{
    int result;
    int a1[] = {1, 3, 2};
    int b2[] = {4, 3, 1, 5, 2};

    result = minimumBoxes(a1, 3, b2, 5);
    printf("%d\n", result);

    return 0;
}