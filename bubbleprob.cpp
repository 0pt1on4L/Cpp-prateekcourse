#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubblesort(int *arr, int n)
{
    for (int times = 0; times < n; times++)
    {
        if(arr[times]<arr[times+1]){return;}
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

    int arr[] = {1,3,5,7,9};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
// cout<<endl<<"sorted array"<<endl;
    cout<<"{";
    for(int i = 0; i<n;i++){
        cout<<","<<arr[i]; 
    }
    cout<<"}}";
}