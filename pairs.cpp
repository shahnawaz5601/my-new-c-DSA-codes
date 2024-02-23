#include <iostream>
using namespace std;
int main()
{
    vector<int> sam;
    sam.push_back(1);
    sam.emplace_back(3);

    // to give grouped input in push_back
    sam.push_back({4, 6});
    // but it is different in emplace back
    sam.emplace_back(5, 4, 5);

    return 0;
}