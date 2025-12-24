#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int minDeletionSize(char **strs, int strsSize)
{
    uint32_t length = (uint32_t)strlen(*strs);
    uint8_t count = 0;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < strsSize - 1; j++)
        {
            if (strs[j + 1][i] < strs[j][i])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int main(void)
{

    return 0;
}