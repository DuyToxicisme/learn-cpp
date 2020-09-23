#include <iostream>
using namespace std;

int function(int i) {
    if (i % 2) {
        return (i++);
    }
    return function(function(i-1));
}

int main()
{
    cout << " " << function(200) <<" ";
    return 0;
}
