// Given an array of size N, rotate it by D elements. 

// Input: 
// The first line of the input contains T denoting the number of testcases. First line of test case is the number of elements N, next line contains D. Subsequent line will be the array elements.

// Output: 
// For each testcase, in a new line, output the rotated array.

// Constraints:
// 1 <= T <= 200
// 1 <= N <= 107
// 1 <= D <= N
// 1 <= arr[i] <= 103

// Example:
// Input:
// 2
// 5 2
// 1 2 3 4 5 
// 10 3
// 2 4 6 8 10 12 14 16 18 20

// Output:
// 3 4 5 1 2
// 8 10 12 14 16 18 20 2 4 6

#include<stdio.h>
#include<stdlib.h>

int main(){
    int noOfTestCases = 0;
    scanf("%d", &noOfTestCases);
    while(noOfTestCases--) {
        int sizeOfArray, shift;
        scanf("%d %d", &sizeOfArray, &shift);
        
    }
    return 0;
}
