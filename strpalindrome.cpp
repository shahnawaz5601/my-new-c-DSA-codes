#include <iostream>
using namespace std;
bool str(string s,int i){
    if(i>=5/2){
        return true;
    }
    if(s[i]!=s[5-i-1]){
        return false;
    }
    return str(s,i+1); 
}
int main(){
    string s="DAMAD";
    cout<<str(s,0);
return 0;
}