#include <stdio.h>

int binarySearch(int array[], int low, int high, int searchValue)
{

    int mid = (high + low) / 2;

    if (low > high)
    {
        return -1;
    }
    if (array[mid] == searchValue)
    {
        return mid;
    }
    else
    {
        if (array[mid] > searchValue)
        {
            return binarySearch(array, low, mid - 1, searchValue);
        }
        else
        {
            if (array[high] < searchValue)
            {
                return binarySearch(array, high + 1, high * 2, searchValue);
            }
            else
            {
                return binarySearch(array, mid + 1, high, searchValue);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {10, 10, 20, 20, 20};
    int searchIndex = binarySearch(array, 0, 1, 20);
    printf("%d", searchIndex);

    int array2[] = {10, 20, 20, 40, 50, 80};
    searchIndex = binarySearch(array2, 0, 1, 40);
    printf("%d", searchIndex);

    int array3[] = {10, 20, 40, 50, 55};
    searchIndex = binarySearch(array3, 0, 1, 20);
    printf("%d", searchIndex);
    return 0;
}
