#include <iostream>
using namespace std;

// Dùng thuật toán đệ quy tìm UCLN của a và b

int ucln(int a, int b) {
    if (b == 0) {
        return a;
    }
    return ucln(b, a % b);
}

int main()
{
    int a,b;
    cout<<"Nhập a, b: ";
    cin>> a >> b;
    cout<<"UCLN của"<<a<<" và "<<b<<" là: "<<ucln(a,b);
}
