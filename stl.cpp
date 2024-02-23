#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int ,4> a={4,5,6,2}; //arr using stl
    int b=a.size();
    for (int i = 0; i < b; i++)
    {
        cout<<a[i]<<endl;
    }
    
return 0;
}