#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    char str[100];
    int n, m, k, l, count = 0;

    fgets(str, sizeof(str), stdin);

    //couting spaces
    for (int i = 0; str[i] != '\0'; ++i)
        if (' ' == str[i])
            ++count;

    //initializing the array
    int oneDim[++count];

    //getting the first token
    char *token = strtok(str, " ");

    //loop throught the string and getting all tokens
    int j = 0;
    while (token != NULL)
    {
        oneDim[j] = atoi(token);
        j++;
        token = strtok(NULL, " ");
    }

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    scanf("%d", &l);
    int matrixResult = k * m + l;
    printf("%d", oneDim[matrixResult]);
    return 0;
}
