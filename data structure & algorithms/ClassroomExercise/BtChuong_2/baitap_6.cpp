#include <iostream>
using namespace std;

// Tính S(n) = 1/(1 + 1/(1 + 1/(1 + 1/(... 1 /(1/(1 + 1/(1 + 1)))))))

float tinhtong(int n) {
    if ( n == 1) {
        return float(1);
    }
    return 1/(1 + tinhtong(n-1));
}

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Tong = " << tinhtong(n);
}
