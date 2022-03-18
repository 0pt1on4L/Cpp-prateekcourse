#include <iostream>
using namespace std;

void printarray(int *arr, int n)
{
    cout << "in function" << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    cout << "in main" << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    printarray(arr, n);
}