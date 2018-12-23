#include <stdio.h>
#include <stdlib.h>

int find_sum_in_subset(int diff, int *mainset, int *currSet, int depth)
{
    if (diff == 0)
    {
        return diff;
    }
    else if (diff < 0)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            depth++;
            int newdiff = find_sum_in_subset(diff - *(mainset + i * sizeof(int)), mainset, currSet, depth);
            if (newdiff == 0)
            {
                *(currSet + depth *(sizeof(int))) = *(mainset + i * sizeof(int));
                return 1;
            }
            else
            {
                return newdiff;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int *currSet = (int *)calloc(5, sizeof(int));
    int depth = -1;
    int *mainset = (int *)calloc(5, sizeof(int));
    *(mainset + 0) = 2;
    *(mainset + sizeof(int)) = 5;
    *(mainset + sizeof(int)) = 3;
    *(mainset + sizeof(int)) = 8;
    *(mainset + sizeof(int)) = 11;
    int sum = 14;
    int possible = find_sum_in_subset(sum, mainset, currSet, depth);
    if (possible)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    /* code */
    return 0;
}
