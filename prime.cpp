#include <iostream>
using namespace std;
bool prime(int n){
    int flag;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }
    if(flag==0)
    return false;
    else
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<prime(n);
    
return 0;
}