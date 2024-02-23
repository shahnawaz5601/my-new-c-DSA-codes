#include <iostream>
using namespace std;
int n=0;
void print(){
    string name="sam";
    if(n==5){
        return;
    }
    cout<<name<<endl;
    n+=1;
    print();
}
int main(){
        // to print a name
        print();
return 0;
}   