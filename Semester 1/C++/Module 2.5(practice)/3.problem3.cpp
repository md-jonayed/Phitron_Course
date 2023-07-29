#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    // cout<<"\n";
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

