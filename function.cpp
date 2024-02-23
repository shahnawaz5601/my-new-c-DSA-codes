#include <iostream>
using namespace std;
int func_add(int x,int y){
    int z=x+y;
    return z;
}

void func_2(int *a,int *b){
    *a=10;
    *b=12;
}

// this is a void funtion
void print_name(){
    cout<<"Hey this is Sam";
}
int main()
{
    int a , b;
    cin>>a>>b;
    //now we are going to make a function which add two numbers
    int n=func_add(a,b); //this is call by value
    cout<<"the sum of a and b is:"<<n<<endl;
    print_name();
    cout<<"\n";
    int x=2;
    int y=4;
    cout<<x<<" "<<y<<endl;
    func_2(&x,&y); //pass by refrence
    cout<<x<<" "<<y<<endl;

    return 0;
}
