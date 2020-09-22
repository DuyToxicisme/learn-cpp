#include <iostream>
using namespace std;

// . Tính S(x,n) = 1 + (x^2)/2! + (x^4)/4! + ... + (x^2n)/(2n)!

float luythua(float x, int n) {
    if(n == 0) {
        return 1;
    }
    return x*luythua(x, n - 1);
}

long long giaithua(int n) {
    if (n == 1) {
        return (float)1;
    }
    return n*giaithua(n - 1);
}

float LTchiaGT(float x, int n) {
    if ( n == 1) {
        return 1;
    }
    return (x * luythua(x, n-1)) / (n * giaithua(n-1)) + LTchiaGT(x, n-1);
}

int main()
{

    float x;
    int n;
    cout<< "Nhập x, n: "; cin >> x >> n;
    cout<< "Tổng = " <<LTchiaGT(x, 2*n);
}
