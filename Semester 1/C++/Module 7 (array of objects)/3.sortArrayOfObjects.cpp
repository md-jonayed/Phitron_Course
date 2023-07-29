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

    for(int i=0;i<3-1;i++){
        for(int j=i+1;j<3;j++){
            if(s[i].marks>=s[j].marks){
                swap(s[i],s[j]);
            }
        }
    } 

    for(int i=0;i<3;i++){
        cout<<s[i].name<<" "<<s[i].marks<<" "<<s[i].roll<<endl;
    }

    return 0;
}

