#include <bits/stdc++.h>

using namespace std;
class Student{
    public:
    string name;
    int cls;
    char section;
    int id;
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
        cin>>s[i].id;
        cin.ignore();
    }
    Student temp;
    for(int i=0;i<(size/2);i++){
        temp.id = s[i].id;
        s[i].id = s[size-1-i].id;
        s[size-1-i].id = temp.id;
    }
    
    for(int i=0;i<size;i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].id<<endl;
    }
}
