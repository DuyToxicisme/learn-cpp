#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Nhập a,b,c: ";
    cin>> a >> b >> c;
    float x;
    if( a == 0) {
        x = -c/b;
        cout<<"Nghiệm của phương trình là: "<<x;
        return 0;
    }
    float dt = b*b - 4*a*c;
    if( dt < 0) {
        cout<<"Phương trình vô nghiệm";
    }
    else if ( dt == 0) {
        x = -b/(2*a);
        cout<<"Phương trình có nghiệm duy nhất là: "<<x;
    }
    else {
        float x1,x2;
        x1 = (-b + sqrt(dt))/ (2*a);
        x2 = (-b - sqrt(dt))/ (2*a);
        cout<<"Phương trình có 2 nghiệm phân biệt là: "<<x1<< " và " <<x2;
    }
}
