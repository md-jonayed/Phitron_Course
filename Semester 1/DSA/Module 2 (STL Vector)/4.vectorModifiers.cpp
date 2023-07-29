#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vect1;
    vect1.push_back(10);
    vect1.push_back(10);
    vect1.push_back(30);
    vect1.push_back(40);

    replace(vect1.begin(),vect1.end(),10,1);
    for(int val:vect1){
        cout<<val<<endl;
    }
    cout<<endl;

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    vector<int>::iterator it;
    it = find(v1.begin(),v1.end(),30);
    cout<<*it<<endl;
    if(it==v1.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }

    cout<<v1.back()<<endl;

    cout<<v1.front()<<endl;
    // vector<int>::iterator it1;
    for( auto it1=v1.begin();it1<v1.end();it1++){
        cout<<*it1<<endl;
    }


	
	
    return 0;
}

