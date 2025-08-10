#include <bits/stdc++.h>
using namespace std;

void ins(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {23, 44, 65, 34, 21, 33, 78, 92};
    int size = sizeof(arr) / sizeof(arr[0]);

    ins(arr, size);
    cout << "sorted array: " << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}