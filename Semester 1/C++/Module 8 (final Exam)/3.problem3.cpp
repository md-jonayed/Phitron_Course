#include <bits/stdc++.h>

using namespace std;
class Student{
    public:
    string name;
    int cls;
    char section;
    float mathMarks,englishMarks;
};


int main()
{
    int size;
    cin>>size;
    Student s[size];
    for(int i=0;i<size;i++){
        cin>>s[i].name;
        cin>>s[i].cls;
        cin>>s[i].section;
        cin>>s[i].mathMarks;
        cin>>s[i].englishMarks;
        cin.ignore();
    }
    
    for(int i=size-1;i>=0;i--){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].mathMarks<<" "<<s[i].englishMarks<<endl;
    }
}
