#include <stdio.h>

int maxArea(int *height, int heightSize)
{
    int *left = height;
    int *right = height + heightSize - 1;
    int maxWater = 0;

    while (left < right)
    {
        int h = *left < *right ? *left : *right;
        int w = right - left;
        int a = w * h;
        if (a > maxWater)
            maxWater = a;

        *left > *right ? right-- : left++;
    }
    return maxWater;
}

int main(void)
{
    int result;
    int s1[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    result = maxArea(s1, 9);
    printf("%d\n", result);

    int s2[] = {8, 7, 2, 1};

    result = maxArea(s2, 4);
    printf("%d\n", result);

    return 0;
}