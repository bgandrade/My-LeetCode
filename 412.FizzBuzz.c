#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **fizzBuzz(int n, int *returnSize)
{
    *returnSize = n;
    char **arr, *s;
    size_t arrSize = sizeof(*arr) * n;
    arr = malloc(arrSize + n * 9);
    s = (char *)arr + arrSize;

    for (int i = 0, f, b; i < n; i++)
    {
        arr[i] = s + i * 9;
        int number = i + 1;

        f = number % 3;
        b = number % 5;

        if (f == 0 && b == 0)
        {
            strcpy(arr[i], "FizzBuzz");
        }
        else if (f == 0)
        {
            strcpy(arr[i], "Fizz");
        }
        else if (b == 0)
        {
            strcpy(arr[i], "Buzz");
        }
        else
        {
            sprintf(arr[i], "%d", number);
        }
    }
    return arr;
}

char **fizzBuzzM(int n, int *returnSize)
{
    *returnSize = n;
    char **arr = malloc(sizeof(*arr) * n);

    for (int i = 0, f, b; i < n; i++)
    {
        arr[i] = malloc(sizeof(char) * 9);
        int number = i + 1;

        f = number % 3;
        b = number % 5;

        if (f == 0 && b == 0)
        {
            strcpy(arr[i], "FizzBuzz");
        }
        else if (f == 0)
        {
            strcpy(arr[i], "Fizz");
        }
        else if (b == 0)
        {
            strcpy(arr[i], "Buzz");
        }
        else
        {
            sprintf(arr[i], "%d", number);
        }
    }
    return arr;
}

int main()
{
    clock_t start, end;

    int returnSize;
    char **result;

    start = clock();
    result = fizzBuzz(15, &returnSize);
    end = clock();

    printf("Tempo de processamento: %lf\n", ((double)(end - start)) / CLOCKS_PER_SEC);
    free(result);

    start = clock();
    result = fizzBuzzM(15, &returnSize);
    end = clock();

    printf("Tempo de processamento: %lf\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    free(result);

    return 0;
}