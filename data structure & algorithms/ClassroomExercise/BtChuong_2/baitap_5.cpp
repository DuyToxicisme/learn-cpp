#include <iostream>
using namespace std;

// Tính S = 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+...+n)

float tongmauso(float n) {
    if ( n == 1) {
        return (float)1;
    }
    return n + tongmauso(n - 1);
}

float tong(int n) {
    if ( n == 1) {
        return (float)1;
    }
    return tong(n-1) + 1/(tongmauso(n-1) + n);
}

int main()
{
    int n;
    cout<< "Nhập n: "; cin>> n;
    cout<< "Tổng = "<< tong(n)<<endl;
}
