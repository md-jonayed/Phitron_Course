#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    for(int i=1;i<=testCases;i++){
        int size;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++){
            cin>>a[i];
        }
        int mn=INT_MAX;
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                mn= min(mn,(a[i]+a[j]+j-i));
                
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}

