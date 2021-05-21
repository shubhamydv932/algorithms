#include <stdio.h>
 
int fPeak(int A[], int low, int high, int n)
{
    int mid = (low + high) / 2;
 
    if ((mid == 0 || A[mid - 1] <= A[mid]) &&
        (mid == n - 1 || A[mid + 1] <= A[mid])) {
        return mid;
    }
 
    if (mid - 1 >= 0 && A[mid - 1] > A[mid]) {
        return Peak(A, low, mid - 1, n);
    }
 
    return Peak(A, mid + 1, high, n);
}
 
int main(void)
{
    int A[] = { 8, 9, 10, 2, 5, 6 };
    int n = sizeof(A) / sizeof(A[0]);
 
    int index = Peak(A, 0, n - 1, n);
    printf("The peak element is %d", A[index]);
 
    return 0;
}




