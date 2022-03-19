#include <bits/stdc++.h>
using namespace std;

void selectionsort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int current = arr[i];
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int main(){
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);
	selectionsort(arr,n);

	for(auto x : arr){
		cout << x  <<",";
	}

	return 0;
}