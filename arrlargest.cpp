#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector <int> arr;
    // int n;
    // cout<<"Entert the no. of elements"<<endl;
    // cin>>n;
    // cout<<"Enter the elements: \n";
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     arr.push_back(x);
    // }
    // sort(arr.begin(),arr.end());
    // cout<<arr[n-1];
    
    //using array:

    int arr[5]={4,7,1,2,9};
    int largest=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i+1]>largest)
        largest=arr[i+1];
    }
    cout<<largest;
return 0;
}