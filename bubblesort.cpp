#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubblesort(int *arr, int n)
{
    for (int times = 0; times < n; times++)
    {
        for (int j = 0; j < n - times; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){

    int arr[] = {1,2,3,5,6,-3,5,-1,3,8,9,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<"original array"<<endl;
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" "; 
    }
    bubblesort(arr,n);
cout<<endl<<"sorted array"<<endl;
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" "; 
    }
}