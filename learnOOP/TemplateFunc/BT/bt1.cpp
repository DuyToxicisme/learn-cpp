#include <iostream>
using namespace std;
// viết template function tìm giá trị lớn nhất trong 3 số

template <class T>
T findMax(T a, T b, T c)
{
    T result = a;
    if (result < b)
    {
        result = b;
    }
    if (result < c)
    {
        result = c;
    }
    return result;
}
int main()
{
    int intMax;
    intMax = findMax<int>(1, 9, 3);
    cout << intMax << endl;
}
