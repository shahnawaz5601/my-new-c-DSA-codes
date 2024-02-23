#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int m;
    cout << "enter the size of array a1 and a2" << endl;
    cin >> n >> m;
    int a1[n];
    int a2[m];
    cout << "enter the elements of array a1";
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }

    cout << "enter the elements of array a2";
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a1[i]<<" ";
    }

    cout << endl;

    for (int i = 0; i < m; i++)
    {
        cout << a2[i]<<" ";
    }

    return 0;
}
