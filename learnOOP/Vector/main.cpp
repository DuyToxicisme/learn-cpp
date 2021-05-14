#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(80);
    // cout << v1.size() << endl;
    // cout << v1.front() << endl;
    // cout << v1.back() << endl;
    cout << v1.at(2) << endl;

    v1.pop_back();
    return 0;
}
