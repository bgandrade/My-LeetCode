#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
        return strdup("");

    for (int j = 0; strs[0][j]; j++)
    {
        for (int i = 1; i < strsSize; i++)
        {
            if (strs[0][j] != strs[i][j])
            {
                return strndup(*strs, j);
            }
        }
    }
    return strdup(*strs);
}

int main()
{
    char *prefix;

    // teste 1
    char *s1[] = {"flower", "flow", "flight"};
    prefix = longestCommonPrefix(s1, 3);
    printf("%s\n", prefix);
    free(prefix);

    // teste 2
    char *s2[] = {"dogggg", "dogger", "dog"};
    prefix = longestCommonPrefix(s2, 3);
    printf("%s\n", prefix);
    free(prefix);

    return 0;
}