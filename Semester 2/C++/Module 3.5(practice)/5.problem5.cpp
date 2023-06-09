
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int size;
//     cin>>size;
//     char s[size];
//     cin>>s;
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size;j++){
//             if(s[i]>s[j]){
//                 int temp = s[i];
//                 s[i] = s[j];
//                 s[j]=temp;
//             }
//         }
//     }
//     cout<<s<<endl;
//     return 0;
// }


 

#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int arr[26] = {0};  
	int size; 
	cin>>size;
	for(int i=0;i<size;i++){ 
	    char c;
	    cin>>c;
		arr[(int)c - 97]++;
	}
	for(int i= 0;i<=25;i++){ 
        	while(arr[i] != 0){
			cout<<(char)(i+97);
			arr[i]--;
		}
	}
}