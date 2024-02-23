#include <iostream>
using namespace std;
void swap(int a[],int b[],int i,int j){
    int temp=a[i];
    a[i]=b[j];
    b[j]=temp;
}
void revarr(int arr[],int n){
    int i=0,j=n-1;
    while(i!=j){
        swap(arr,arr,i,j);
        i++;j--;
    }
}

int main(){
    int k[]={8,5,6,7,2,3,4};
    revarr(k,7);
    for(int i=0;i<7;i++){
        cout<<k[i]<<" ";
    }
return 0;
}