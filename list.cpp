#include <iostream>
#include <list>
using namespace std;
int main(){
    list <int> l;
    l.push_back(5);  //to insert element
    l.push_front(4);
    for(int i:l){
        cout<<i<<" ";
    }

return 0;
}