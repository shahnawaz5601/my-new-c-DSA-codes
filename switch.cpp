#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of the day in week";
    cin>>n;
    switch(n){
        case 1:{
            cout<<"the day is monday";
            break;
        }
        case 2:{
            cout<<"the day is tuesday";
            break;
        }
        case 3:{
            cout<<"the day is wednesday";
            break;
        }
        case 4:{
            cout<<"the day is thursday";
            break;
        }
        case 5:{
            cout<<"the day is friday";
            break;
        }
        case 6:{
            cout<<"the day is saturday";
                break;
        }
        case 7:{
            cout<<"the day is sunday";
            break;
        }
        default:
            cout<<"the date u entered is invalid";
    }

    return 0;
}
