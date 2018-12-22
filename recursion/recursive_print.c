#include <stdio.h>

int printasc(int n, int i)
{
    if (i > 0)
    {
        printf("%d", n - --i);
        printasc(n, i);
    }
}

void printdesc(int n)
{
    if (n > 0)
    {
        printf("%d", n--);
        printdesc(n);
    }
}

int main(int argc, char const *argv[])
{
    int n = 7;
    printasc(n, n);
    printf("\n");
    printdesc(n);
}
