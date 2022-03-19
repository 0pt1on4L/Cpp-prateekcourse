#include<bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;
void countsort(int arr[],int n){
    int largest = -1;
    for(int i=0; i<n ; i++){
        largest = max(largest, arr[i]);
    }

    vector<int> freq(largest+1,0);
    for(int i=0; i<n ; i++){
        freq[arr[i]]++; 
    }

    int j =0; 
    for(int i = 0; i<= largest;i++){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main(){
	int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
	int n = sizeof(arr)/sizeof(int);
    countsort(arr,n);

	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}

