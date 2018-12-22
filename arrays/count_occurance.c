#include<stdio.h>

int first_index(int array[], int low, int high, int searchValue){
    
    int mid = (high + low)/2;

    if(low > high){
        return -1;
    }
    if(array[mid] == searchValue)
    {
        if(mid == 0 || array[mid-1] == searchValue){
            return mid;
        }
        // if(first_index(array, low, mid-1, searchValue) == -1){
        //     return mid;
        // } 
        else
        {
            return first_index(array, low, mid-1, searchValue);
        }
    }
    else
    {
        if(array[mid] > searchValue)
        {
            return first_index(array, low, mid - 1,searchValue);
        }
        else
        {
            return first_index(array, mid + 1, high,searchValue);
        }
    }
}

int last_index(int array[], int len, int low, int high, int searchValue){
    
    int mid = (high + low)/2;

    if(low > high){
        return -1;
    }
    if(array[mid] == searchValue)
    {
        if(mid == len || array[mid + 1] == searchValue){
            return mid;
        }
        // if(first_index(array, low, mid-1, searchValue) == -1){
        //     return mid;
        // } 
        else
        {
            return last_index(array, len, mid+1, high, searchValue);
        }
    }
    else
    {
        if(array[mid] > searchValue)
        {
            return last_index(array, len, low, mid - 1,searchValue);
        }
        else
        {
            return last_index(array, len, mid + 1, high,searchValue);
        }
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {10,20,20,20,20};
    int searchIndex = last_index(array, 4, 0, 4, 20) - first_index(array, 0, 4, 20);
    printf("%d", searchIndex); // 1
    
    int array2[] = {30,30,40,40,40,40};
    searchIndex = last_index(array2, 5, 0, 5, 30) - first_index(array2, 0, 5, 30);
    printf("%d", searchIndex); // 0
    return 0;
}
