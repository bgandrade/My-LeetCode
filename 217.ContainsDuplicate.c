#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int compararInteiros(const void *a, const void *b)
{
    int va = *(int *)a;
    int vb = *(int *)b;
    if (va > vb)
        return 1;
    if (vb < va)
        return -1;
    return 0;
}

bool containsDuplicate(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compararInteiros);

    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
    }
    return false;
}

bool containsDuplicate2(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;
}

int main()
{
    int n = 100000;
    int *array = malloc(sizeof(int) * n);

    srand(1);
    for (int i = 0; i < n; i++)
    {
        array[i] = rand();
    }

    clock_t start, end;

    int returnSize;
    char **result;

    start = clock();
    containsDuplicate2(array, n);
    end = clock();
    printf("Tempo de processamento: %lf\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    start = clock();
    containsDuplicate(array, n);
    end = clock();
    printf("Tempo de processamento: %lf\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    return 0;
}