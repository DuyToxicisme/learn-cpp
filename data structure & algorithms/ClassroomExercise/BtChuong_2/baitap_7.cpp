#include <iostream>
using namespace std;

// Tính S(x,n) = x + (x^2)/2! + (x^3)/3! + ... + (x^n)/n!
// n > 0

float lt(float x, int n) {
    if(n == 0) {
        return 1;
    }
    return x*lt(x, n - 1);
}

long long gt(int n) {
    if (n == 1) {
        return (float)1;
    }
    return n*gt(n - 1);
}

float ltchiagt(int x, int n) {
    if ( n == 1) {
        return x;
    }
    return (x * lt(x, n-1)) / (n * gt(n-1)) + ltchiagt(x, n-1);
}

int main()
{
    int x, n;
    cout << "Nhập x, n: ";
    cin >> x >> n;
    cout << "Tổng = " <<ltchiagt(x,n);
}
