#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void search(char* pat,char* text){
    int n= strlen(text);
    int m = strlen(pat);  
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++)
            if(text[i+j]!=pat[j])
                break;  
        if(j == m)
            cout<<"Found at index"<<i<<endl;       
    }

}

int main(){
    char txt[] = "AABAACAADAABAAABAA";  
    char pat[] = "AABA";
    search(pat, txt);
    return 0;
}