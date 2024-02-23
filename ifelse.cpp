#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter you age"<<endl;
    cin>>age;
    if(age>0 && age<21){
        cout<<"you are not legally allowed to drink"<<endl;
    }
    else if(age>=21 && age<65){
        cout<<"you are all welcome in the club";
    }
    else{
        cout<<"you age isn't suitable:"<<endl;
    }
    return 0;
}
