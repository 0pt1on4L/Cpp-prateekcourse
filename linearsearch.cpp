#include <iostream>
using namespace std;

int linearsearch(int *arr,int n, int key){
    for(int i=0; i<n ; i++){
        if(arr[i] == key){
            return i;   
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,234,32,45,54,12,676,1245,3,4,5,7,8,9,5};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = linearsearch(arr,n,key);
if(index == -1){
    cout<<"element doesnt exist";
}
else {
    cout<<index;
}
    return 0;
}