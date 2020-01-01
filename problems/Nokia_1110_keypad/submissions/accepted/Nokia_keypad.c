#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    char letters[8][4] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'},
        {'j', 'k', 'l'},
        {'m', 'n', 'o'},
        {'p', 'q', 'r', 's'},
        {'t', 'u', 'v'},
        {'w', 'x', 'y', 'z'}};
    int n;
    scanf("%d", &n);
    int current, length, lw, position;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &current);
        if (current == 0)
            printf(" ");
        else
        {
            position = current % 10 - 2;
            length = position == 5 || position == 7 ? 4 : 3;
            lw = floor(log10(abs(current))) + 1;
            printf("%c", letters[position][(lw - 1) % length]);
        }
    }

    return 0;
}
