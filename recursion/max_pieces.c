#include <stdio.h>

int max_piece(int n, int a, int b, int c)
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
        if (max_piece(n - a, a, b, c) == 1)
        {
            return 1;
        }
        else if (max_piece(n - b, a, b, c) == 1)
        {
            return 1;
        }
        else if (max_piece(n - c, a, b, c) == 1)
        {
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
    int n = max_piece(48, 13, 13, 13);
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
