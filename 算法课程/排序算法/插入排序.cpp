#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size)
{
    int i, j, temp;
    
    // int size = sizeof(arr) / sizeof(arr[0]);
    for (i = 1; i < size; i++)
        for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
}

int main()
{
    int arr[] = {1, 4, 2, 3, 5};
    int arr_len = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, arr_len);
    
    for (int i = 0; i < arr_len; i++)
    {
        printf("%d ", arr[i]);
    }
}
