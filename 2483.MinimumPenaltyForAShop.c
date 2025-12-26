#include <stdio.h>
#include <string.h>

int bestClosingTime(char *customers)
{
    int NCount = 0;
    int YCount = 0;
    char *ptr = customers;

    while (*ptr != '\0')
    {
        if (*ptr == 'Y')
            YCount++;
        ptr++;
    }

    int minPenalty = YCount;
    int minHour = 0;

    ptr = customers;
    while (*ptr != '\0')
    {
        *ptr == 'N' ? NCount++ : YCount--;
        int penalty = NCount + YCount;
        if (minPenalty > penalty)
        {
            minPenalty = penalty;
            minHour = ptr - customers + 1;
        }

        ptr++;
    }
    return minHour;
}
int main(void)
{
    int result;

    char a[] = "YYNY";
    result = bestClosingTime(a);
    printf("%d\n", result);

    char b[] = "NNNNN";
    result = bestClosingTime(b);
    printf("%d\n", result);

    char c[] = "YYYY";
    result = bestClosingTime(c);
    printf("%d\n", result);

    return 0;
}