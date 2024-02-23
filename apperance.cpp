#include <iostream>
#include <array>
using namespace std;
void duplicate(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for (int j = 0; j<n; j++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        cout<<arr[i]<<" appeared "<<count<<"times "<<endl;  
        count=0; //although it does tell the count its not a good code
    }
}
int main(){
    int arr[11]={3,5,7,2,3,5,8,9,2,3,5};
    duplicate(arr,11);
return 0; 
}