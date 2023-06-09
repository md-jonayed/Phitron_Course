#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
int main(){
    Person p[3];
    for(int i=0;i<3;i++){
        getline(cin,p[i].name);
        cin>>p[i].age;
        cin.ignore();
    }  

    for(int i=0;i<3;i++){
        cout<<p[i].name<<" "<<p[i].age<<endl;
    }
    return 0;
}

