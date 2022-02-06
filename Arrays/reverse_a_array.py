import numpy as np


def reverseArray(arr):
    start = 0
    end = len(arr) - 1
    while (start < end):
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1


n = int(input("Enter the length of array...  "))
array = np.random.randint(0, 250, n, dtype=int)
l = len(array)
print("\nBefore reversing,... \n", array)
reverseArray(array)
print("\nAfter reversing,... \n", array)