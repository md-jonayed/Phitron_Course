#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
int main(){
    Student s[3];
    for(int i=0;i<3;i++){
        getline(cin,s[i].name);
        cin>>s[i].roll;
        cin>>s[i].marks;
        cin.ignore();
    }  

    Student mx,mn;
    mx.marks = INT_MIN;

    for(int i=0;i<3;i++){
        if(s[i].marks>mx.marks){
            mx=s[i];
        }
    } 

    cout<<mx.name<<" "<<mx.marks<<" "<<mx.roll<<endl;

    mn.roll = INT_MAX;

    for(int i=0;i<3;i++){
        if(s[i].roll<mn.roll){
            mn=s[i];
        }
    } 

    cout<<mn.name<<" "<<mn.marks<<" "<<mn.roll<<endl;
    return 0;
}

