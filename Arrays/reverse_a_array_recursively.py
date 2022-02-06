import numpy as np


def reverseArray(arr, start, end):
    while start >= end:
        return

    arr[start], arr[end] = arr[end], arr[start]
    start += 1
    end -= 1
    reverseArray(arr, start, end)


n = int(input("Enter the length of array...  "))
array = np.random.randint(0, 250, n, dtype=int)
l = len(array)
print("\nBefore reversing,... \n", array)
reverseArray(array, 0, l - 1)
print("\nAfter reversing,... \n", array)