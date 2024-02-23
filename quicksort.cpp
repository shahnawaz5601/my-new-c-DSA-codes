#include <iostream>
#include <vector>
using namespace std; 
int partition(vector <int> &arr,int low,int high){
        int i=low;int j=high;
        int pivot=arr[low];
        while(i< j){
            while(arr[i]<=pivot && i<=high-1){
                    i++;
            }
            while(arr[j]>pivot && j>=low+1){
                j--;
            }

            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
            swap(arr[low],arr[j]);
            return j;
        
}
void quicksort(vector <int> &arr,int low,int high){
        if(low<high){
            int pIndex=partition(arr,low,high);
            quicksort(arr,low,pIndex-1);
            quicksort(arr,pIndex+1,high);
        }
}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
vector <int> arr;
    int n;
    cout<<"ENter the no. of elements u want to enter: ";
    cin>>n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    quicksort(arr,0,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }
return 0;
} 