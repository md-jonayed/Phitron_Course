// C++ program to initialize
// a vector like an array.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vect1;
    vect1.push_back(10);
    vect1.push_back(20);
    vect1.push_back(30);
    vect1.push_back(40);

	vector<int> vect2;
    vect2.push_back(1);
    vect2.push_back(2);
    vect2.push_back(3);

    vect1=vect2;
    for(int i=0;i<vect1.size();i++){
        cout<<vect1[i]<<endl;
    }
    vect1.pop_back();
    
    for(int i=0;i<vect1.size();i++){
        cout<<vect1[i]<<endl;
    }

    vect1.insert(vect1.end(),100);

    for(int i=0;i<vect1.size();i++){
        cout<<vect1[i]<<endl;
    }
    vect1.insert(vect1.begin()+1,200);

    for(int i=0;i<vect1.size();i++){
        cout<<vect1[i]<<endl;
    }
    vect1.insert(vect1.begin()+3,vect2.begin(),vect2.end());
    cout<<endl;
    for(int i=0;i<vect1.size();i++){
        cout<<vect1[i]<<endl;
    }

    vect1.erase(vect1.begin()+3);
    cout<<endl;
    for(int i=0;i<vect1.size();i++){
        cout<<vect1[i]<<endl;
    }

    vect1.erase(vect1.begin()+2,vect1.end());

    for(int i=0;i<vect1.size();i++){
        cout<<vect1[i]<<endl;
    }
	return 0;
}
