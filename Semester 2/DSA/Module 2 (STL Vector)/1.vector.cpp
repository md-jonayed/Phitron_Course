#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    cout<<v.size()<<endl;
    vector<int>v1(5);
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }

    //inserting elements in vector:
    vector<int> v2(5,10);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }

    //copying one vector to another;
    vector<int> v3(5,1);
    vector<int>v4(v3);
    for(int i=0;i<v4.size();i++){
        cout<<v4[i]<<endl;
    }

    //copying an array into a vector:
    int a[5]={1,2,3,4,5};
    vector<int>v5(a,a+5);
    for(int value : v5){
        cout<<value<<endl;
    }

    //vector initialization :
    // vector<int> v6 = {1,2,3,4,5};
    // for(int i=0;i<v6.size();i++){
    //     cout<<v6[i]<<endl;
    // }

    return 0;
}
