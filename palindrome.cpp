#include <iostream>
using namespace std;
int main(){
        int a;
        cout<<"enter the number to check palindrome\n";
        cin>>a;
        int original=a;
        int reverse=0;
        int i=0;
        while(a!=0){
            reverse=reverse*10+a%10;
            a=a/10;
            i++; //counts the digits
        }
        cout<<reverse<<endl;
        if(original==reverse){
            cout<<"the number is a palindrome\n";
        }
        else
        cout<<"it is not a palindrome\n";
        cout<<i<<endl;

return 0;
}