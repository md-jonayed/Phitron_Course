#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float marks;
};
bool cmp(Student a, Student b){
    if(a.marks>=b.marks) return true;
    else if(a.marks==b.marks){
        if(a.roll>b.roll)return true;
    }
    else return false;
}
int main(){
    int size;
    cin>>size;
    Student s[size];
    for(int i=0;i<size;i++){
        // getline(cin,s[i].name);
        cin>>s[i].name;
        cin>>s[i].roll;
        cin>>s[i].marks;
        cin.ignore();
    }
    sort(s,s+size,cmp);
    for(int i=0;i<size;i++){
        cout<<"Name : "<<s[i].name<<"-> Roll : "<<s[i].roll<<"-> Marks : "<<s[i].marks<<endl;
    }
    return 0;
}

