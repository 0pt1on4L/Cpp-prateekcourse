#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int key= -999999;
    for (int i=0 ;i<arr.size();i++){
        if(arr[i]>key){
            key = arr[i];
        }
    }
     return key;
}

int main(){
  vector<int> arr= {-3,4,1,2,3};
//  vector<int> arr= {-1,-2,-3,-3,8};
 int key= largestElement(arr);
cout<<key;
    return 0;
}