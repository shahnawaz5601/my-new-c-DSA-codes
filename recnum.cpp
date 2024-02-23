#include <iostream>
using namespace std;
void recprint(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    i+=1;
    recprint(i,n);
}
int main(){
    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    int i=1;
    recprint(i,n);
return 0;
}