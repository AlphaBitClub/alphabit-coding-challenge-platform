#include <stdio.h>

int main(int argc, char const *argv[])
{

    int c, i, j;
    scanf("%c", &c);
    int middle = c - 64;
    int len = middle * 2 - 1;
    char strs[middle][len];
    //getting the upper half of the square
    for (i = 0; i < middle; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (i == 0 || j == 0 || i == len || i == len)
                strs[i][j] = c;
            else if (j >= i && j <= len - i - 1)
                strs[i][j] = strs[i - 1][j] - 1;
            else
                strs[i][j] = strs[i - 1][j];
            printf("%c", strs[i][j]);
        }
        printf("\n");
    }
    // the other half of the square is the same as the first one but reversed
    for (int k = middle - 2; k >= 0; k--)
    {
        for (int l = 0; l < len; l++)
            printf("%c", strs[k][l]);
        printf("\n");
    }
    return 0;
}
