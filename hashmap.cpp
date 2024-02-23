#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    //pre compute in map
    map<int ,int>mpp;  //hash map store all values in sorted order  
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    //iterate in the map
    for (auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    

    //print according to the values 
    int q;   //take no. of queries
    cout<<"Enter the no. of queries you want: "<<endl;
    cin>>q; 

    while(q--){
        int i;
        cout<<"Enter the value to check "<<endl;
        cin>>i;
        cout<<mpp[i]<<endl;
    }
    
return 0;
}