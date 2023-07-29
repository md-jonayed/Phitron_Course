#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    char section;

    Student(int r, char s){
        roll = r;
        section = s;
    }
};
int main(){
    Student s1(1,'A');

    cout<<s1.roll<<" "<<s1.section<<endl;    
    return 0;
}

