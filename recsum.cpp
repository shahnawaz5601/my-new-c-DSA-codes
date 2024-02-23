#include <iostream>
using namespace std;
void sum(int n,int a){
    if(n<1){
        cout<<a;
        return;
    }
    sum(n-1,a+n);   //print sum of natural numbers
}
int main(){
    int n;
    cout<<"Enter the number for sum: ";
    cin>>n;
    sum(n,0);
return 0;
}