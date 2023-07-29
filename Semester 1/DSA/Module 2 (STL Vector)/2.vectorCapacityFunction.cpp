#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    cout<<v.size()<<endl;
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.size()<<endl;
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    for(int val : v){
        cout<<val<<" ";
    }
    // v.clear();
    for(int val : v){
        cout<<val<<" ";
    }
    cout<<v[1]<<endl;
    cout<<v.empty()<<endl; // 1 means  empty 0 means not empty
    v.resize(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.resize(11);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.resize(17,100);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;

}

