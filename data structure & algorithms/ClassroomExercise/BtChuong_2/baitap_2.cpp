#include <iostream>
using namespace std;

// Dùng thuật toán đệ quy tính tổng S = 1 + 2 + ... + n
// Xứ lý với số đầu vào lớn

char tinhtong(int n) {
    if ( n == 1) {
        return 1;
    }
    return n + tinhtong(n - 1);
}

int main()
{
    int n;
    cout<< "Nhap n: ";
    cin>>n;
    cout<<"Tong = " << tinhtong(n);
}
