def bs(arr, size):
    for i in range(size):
        for j in range(size - i - 1):
            if arr[j] > arr[j + 1]:
                temp = arr[i]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp


arr = [23, 11, 34, 54, 12, 65]
s = len(arr)
bs(arr, s)
print("sorted array : ", arr)
