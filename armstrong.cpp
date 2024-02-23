#include <iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter the number to check armstrong\n";
        cin>>n;
        int sum=0;
        int original=n;
        while(n>0){
            int i=n%10;
            sum=sum+(i*i*i);
            n=n/10;
        }
        if(sum==original){
            cout<<"It is armstrong\n";
        }
        else{
            cout<<"Its not armstrong\n";
        }
return 0;
}   