#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char *s)
{
    int maxLength = 0; // tamanho da escolha
    int length;

    char *max = malloc(sizeof(char) * 10); // apenas para debug
    char *w;                               // candidato
    char *p;                               // pesquisador

    w = s;

    while (*s != '\0')
    {
        // neste loop, p avança de c até s -1 e verifica se o caractere de s está contido no intervalo
        // caso encontre um repetido, sai do loop
        p = w;
        while (p < s)
        {
            if (*p == *s)
            {
                // caso seja duplicado, calcula o length da substring
                length = s - w;
                if (length > maxLength)
                {
                    maxLength = length;
                    strncpy(max, w, maxLength); // apenas para debug;
                }
                w = p + 1; // move o ponteiro c para a posição atual p + 1, já que *p == *s
                break;
            }
            p++;
        }
        s++; // avança para o próximo caractere a ser avaliado
    }
    length = s - w;
    if (length > maxLength)
        maxLength = length;
    return maxLength;
}

int main()
{
    char s2[] = " ";
    printf("'%s' -> %d\n", s2, lengthOfLongestSubstring(s2));

    int length;
    char s0[] = "abccabcdbbdde";
    printf("'%s' -> %d\n", s0, lengthOfLongestSubstring(s0));

    char s1[] = "";
    printf("'%s' -> %d\n", s1, lengthOfLongestSubstring(s1));

    return 0;
}