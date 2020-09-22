#include <iostream>
using namespace std;

// Tính P(x,y) = x^y

float luythua(float x, int y) {
    if ( y == 0) {
        return 1;
    }
    else if( y < 0) {
        return luythua(x, y + 1) * (1/x);
    }
    return x * luythua(x, y - 1);

}

int main()
{
    float x;
    int y;
    cout<< "Nhập x,y: "; cin >> x >> y;
    cout << x <<"^" << y << " = "<< luythua(x,y)<< endl;
    cout << "size of result = " << sizeof(x);

    return 0;
}
