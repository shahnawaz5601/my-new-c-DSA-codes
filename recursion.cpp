#include <iostream>
using namespace std;
    int n=0;
void print(){
    if(n==3){
        return;
    }
    cout<<n;
    n++;
    print();
}
int main(){
    int n;
    cin>>n;
    print();
return 0;
}