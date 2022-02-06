#include <iostream>
#include <cstdlib> //for rand()
#include <ctime>   //for time()
#include <cstddef> // For null,
using namespace std;

void reverseArray(int array[], int start, int end)
{
    int temp;
    if (start >= end)
    {
        return;
    }
    temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    reverseArray(array, start + 1, end - 1);
}
int main()
{

    srand(time(NULL));

    int n, *array;
    cout << "Enter length of array.   ";
    cin >> n;

    array = (int *)new int(n);

    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 200;
    }

    cout << "Before Reversing:  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
    cout << "\n";

    reverseArray(array, 0, n - 1);

    cout << "\nAfter Reversing:  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
    cout << "\n";
    return 0;
}