#include <stdio.h>

void print_reverse_array(int a[])
{
    for (int i = 10; i < 0;)
    {
        printf("%d", a[--i]);
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_reverse_array(arr);
    return 0;
}