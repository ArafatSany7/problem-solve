#include <bits/stdc++.h>
using namespace std;

void bs(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {23, 45, 67, 21, 10, 15, 35};
    int size = sizeof(arr) / sizeof(arr[0]);

    bs(arr, size);

    cout << "Sorted Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
