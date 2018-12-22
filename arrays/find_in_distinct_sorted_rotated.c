#include<stdio.h>

int findShift(int array[], int len, int low, int high, int searchValue){
    
    int mid = (high + low)/2;

    if(low > high){
        return -1;
    }
    if(array[mid] == searchValue)
    {
        return mid;
    }
    else
    {
        if(array[mid] > searchValue)
        {
            return findShift(array, len, low, mid - 1,searchValue);
        }
        else
        {
            return findShift(array, len, mid + 1, high,searchValue);
        }
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {10,10,20,20,20};
    int searchIndex = findShift(array, 4, 0, 4, 20);
    printf("%d", searchIndex);
    
    int array2[] = {10,20,20,40,50,80};
    searchIndex = findShift(array2, 5, 0, 5, 30);
    printf("%d", searchIndex);

    int array3[] = {10,20,40,50,55};
    searchIndex = findShift(array3, 4, 0, 4, 20);
    printf("%d", searchIndex);
    return 0;
}
