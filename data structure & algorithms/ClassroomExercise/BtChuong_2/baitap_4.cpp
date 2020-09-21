#include <iostream>
using namespace std;

// Tính P(x,y) = x^y

long long luythua(float x, float y) {
    if ( y == 0) {
        return 1;
    }
    else if( y < 0) {
        return (1/x) * luythua(x, -y - 1);
    }
    return x * luythua(x, y - 1);
}

int main()
{
    float x,y;
    cout<< "Nhập x,y: "; cin >> x >> y;
    cout << x <<"^" << y << " = "<<luythua(x,y);
}
