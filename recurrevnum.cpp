#include <iostream>
using namespace std;
void printnum(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    n-=1;
    printnum(n);
}
int main(){
    int n;
    cout<<"Enter number for reverse printing"<<endl;
    cin>>n;
    printnum(n);
return 0;
}