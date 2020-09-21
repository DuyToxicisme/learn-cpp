#include <iostream>
#include <cstring>
using namespace std;

// Tính S = 1+1.2+1.2.3+…..+1.2.3…n với n>0
// Xử lý với số lớn (tràn số)

long long mul(int n) {
    if (n == 1) {
        return 1;
    }
    return n * mul(n - 1);
}

long long add(int n) {
    if (n == 1) {
        return 1;
    }
    return n * mul(n - 1) + add(n-1);
}

int main()
{
    // char *result[100] = "";
    int n;
    cout<< "Nhập n: "; cin>> n;

    cout << "Tổng = " << add(n);
}
