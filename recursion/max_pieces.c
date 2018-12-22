#include <stdio.h>

int max_piece(int n, int a, int b, int c, int depth, int combination[])
{
    if (n == 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    else
    {
        if (max_piece(n - a, a, b, c, depth++, combination) == 1)
        {
            depth--;
            combination[depth] = a;
            return 1;
        }
        else if (max_piece(n - b, a, b, c, depth++, combination) == 1)
        {
            depth--;
            combination[depth] = b;
            return 1;
        }
        else if (max_piece(n - c, a, b, c, depth++, combination) == 1)
        {
            depth--;
            combination[depth] = c;
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    int combination[10];
    int n = max_piece(48, 11, 13, 13, 0, combination);
    if (n == 1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
