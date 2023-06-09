#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[1001];
    int roll;
    int cls;
    char section;
};

int main(){
    Student rahim,karim;
    rahim.roll = 10;
    rahim.cls = 9;
    rahim.section ='A';
    char ch[1001] = "Rahim";
    strcpy(rahim.name,ch);
    cout<<rahim.name<<endl;

    karim.roll = 10;
    karim.cls = 9;
    karim.section ='A';
    char ch1[1001] = "Karim";
    strcpy(karim.name,ch1);
    cout<<karim.name<<endl;
}