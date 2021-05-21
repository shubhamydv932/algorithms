#include <stdio.h>
 
int InversionCount(int arr[], int n)
{
    int inversionCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j]) {
                inversionCount++;
            }
        }
    }
    return inversionCount;
}
 
int main()
{
    int arr[] = { 1, 9, 6, 4, 5 };
    int N = sizeof(arr)/sizeof(arr[0]);
 
    printf("The inversion count is %d", InversionCount(arr, N));
 
    return 0;
}

