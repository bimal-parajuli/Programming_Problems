#include <iostream>
#include <cstdlib> //for rand()
#include <ctime>   //for time()
#include <cstddef> // For null,
using namespace std;

void reverseArray(int array[], int len)
{
    int start = 0, end = len - 1, temp;
    while (start < end)
    {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
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

    reverseArray(array, n);

    cout << "\nAfter Reversing:  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
    cout << "\n";
    return 0;
}