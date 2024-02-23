#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque <int> d;
    d.push_back(5); //push element at end
    d.push_front(6); //push element at start
    cout<<"the size of d is "; cout<<d.size()<<endl; //to get size
    d.pop_back();
    for(int i:d){
        cout<<i<<endl;
    }
    d.push_front(8);
    d.push_front(7);
    d.push_front(2);
    cout<<"print the first element: "<<d.at(0)<<endl;
    cout<<"the size of d is "; cout<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); //erase elements in a particular range
    cout<<"the size of d is "; cout<<d.size()<<endl; 
return 0;
}