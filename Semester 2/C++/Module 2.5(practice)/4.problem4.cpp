#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    int a[size];
    int mx =0;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    for(int i=0;i<size;i++){
        mx = max(mx,a[i]);
    }
    cout<<mx<<endl;
    return 0;
}

