#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float marks;
};
int main(){
    int size;
    cin>>size;
    Student s[size];

    for(int i=0;i<size;i++){
        cin>>s[i].name;
        cin>>s[i].roll;
        cin>>s[i].marks;
        cin.ignore();
    }
    for(int i=size-1;i>=0;i--){
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
    return 0;
}

