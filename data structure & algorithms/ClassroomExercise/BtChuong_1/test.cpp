#include <iostream>
#include <math.h>
using namespace std;

long long tinhtong(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * n + tinhtong(n - 1);
}

double tongchia(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 1.0 / tinhtong(n) + tongchia(n - 1);
}

int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    cout << "tong = " << roundf(tongchia(n) * 100000) / 100000;
}
