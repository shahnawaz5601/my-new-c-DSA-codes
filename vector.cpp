#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int a=v.capacity(); // vector intitally has size 0;
    cout<<a<<endl;
    v.push_back(5);  //push_back inserts a element in vector
    cout<<v.capacity()<<endl;
    v.push_back(6);
    v.push_back(4);
    cout<<v.capacity()<<endl; //vector doubles size when there is no space
    cout<<"Element at 2nd index: "<<v.at(2)<<endl; //access at specified location

    cout<<"front elementt "<<v.front()<<endl; //first element
    cout<<"back elementt "<<v.back()<<endl;  //second element

    v.pop_back(); //it pop out elements from back
    cout<<"elements after pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of v befor clear: "<<v.size()<<endl;
    v.clear();
    cout<<"Size of v after clear: "<<v.size()<<endl; //size reduced to 2 

    //some more vector concept

    vector<int>b(5,1); //vector of size 5 , initialise each element with 1
    for(int i:b){
        cout<<i<<endl;
    }
    cout<<"new vector copied from b"<<endl;
    vector <int> last(b); //it copies the all data of b in this new vector
    for(int i:last){
        cout<<i<<endl;
    }
return 0;
}