#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int hash[10]={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] +=1; //creting our hash
    }
    
    while(n--){
        int num;
        cout<<"Enter the number you want to check: "<<endl;
        cin>>num;
        cout<<hash[num]<<endl; //no. of times num appeared
    }
return 0;
}