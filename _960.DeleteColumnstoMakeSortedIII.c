// NÃO RESOLVIDA
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int minDeletionSize(char **strs, int strsSize)
{
    int deletedCount = 0;
    int lastValidIndex = 0;
    bool sorted;

    for (int i = 0; strs[0][i] != '\0'; i++)
    {
        sorted = true;
        for (int s = 0; s < strsSize; s++)
        {
            if (strs[s][lastValidIndex] > strs[s][i])
            {
                deletedCount++;
                sorted = false;
                break;
            }
        }
        if (sorted)
            lastValidIndex = i;
    }
    return deletedCount;
}

int main(void)
{
    char s[] = "baabab";
    char *p[] = {s};

    int result;
    result = minDeletionSize(p, 1);
    printf("%d\n", result);
    return 0;
}