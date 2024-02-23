#include <iostream>
using namespace std;
int main()
{
    int p,q,r,s;
    cout<<"Enter the size of a1 and a2 matrix";
    cin>>p>>q>>r>>s;
    cout<<endl;
    if(q!=r){
        cout<<"the multiplication isn't possible"<<endl;
    }
    else{
    int a1[p][q];
    int a2[r][s];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin>>a1[i][j];
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; s < q; j++)
        {
            cin>>a2[i][j];
        }
        
    }


    int a3[p][s];
    int sum=0;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < s; j++)
        {
            for (int k = 0; k < q; k++)
            {
               sum=sum+a1[i][k]*a2[k][j];
            }
            a3[i][j]=sum;
            sum=0;
        }
        
    }
    cout<<endl;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout<<a3[i][j];
        }
        cout<<endl;
    }
    
    }
    return 0;
}
