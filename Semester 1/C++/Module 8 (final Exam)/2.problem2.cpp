#include <bits/stdc++.h>

using namespace std;



int main()
{
    string names;
    getline(cin,names);
    stringstream ss(names);
    string name;
    int flag =0;
    while(ss>>name){
        if(name == "Ratul"){
            flag = 1;
            break;
        }
        else{
            flag=0;
        }
        
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
