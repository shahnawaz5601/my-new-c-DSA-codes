#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    int q;
    cout<<"Enter no. of query: "<<endl;
    cin>>q;
    int hash[26]={0 }; // we assume its only lower case letters
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']+=1 ; 
    }
    
    while(q--){
         char c;
         cin>>c;
        cout<<hash[c-'a']<<endl;
    }
return 0;
}