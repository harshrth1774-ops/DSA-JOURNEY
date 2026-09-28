#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, idx = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
            temp[idx++] = arr[left++];
        else
            temp[idx++] = arr[right++];
    }

    while (left <= mid)
        temp[idx++] = arr[left++];

    while (right <= end)
        temp[idx++] = arr[right++];

    for (int i = 0; i < temp.size(); i++)
        arr[start + i] = temp[i];
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end) return;

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    return 0;
}
