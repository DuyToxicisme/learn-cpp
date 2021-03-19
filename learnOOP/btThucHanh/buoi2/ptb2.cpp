#include <iostream>
#include <math.h>
using namespace std;

class phuongtrinh
{
public:
    int a, b, c;
    float x1, x2;
    float delta;
    void nhapPT();
    float tinhDelta();
    float giaiPT();
    void xuatKQ();
};
void phuongtrinh::nhapPT()
{
    cout << "Nhap a,b,c: ";
    cin >> a >> b >> c;
}

float phuongtrinh::tinhDelta()
{
    delta = b * b - 4 * a * c;
    return delta;
}

float phuongtrinh::giaiPT()
{
    if (delta < 0)
    {
        return 0; // vô nghiệm
    }
    else if (delta == 0)
    {
        return 1; // có 1 nghiệm duy nhất
    }
    else
    {
        return 2; // có 2 nghiệm phân biệt
    }
}
void phuongtrinh::xuatKQ()
{
    if (giaiPT() == 0)
    {
        cout << "\nPhương trình vô nghiệm";
    }
    else if (giaiPT() == 1)
    {
        float x = -b / (2 * a);
        cout << "\nphương trình có nghiệm duy nhất x = " << x;
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "\nphương trình có 2 nghiệm phân biệt x1 = " << x1 << " và "
             << "x2 = " << x2;
    }
}

int main()
{
    phuongtrinh ptb2;
    ptb2.nhapPT();
    ptb2.tinhDelta();
    ptb2.giaiPT();
    ptb2.xuatKQ();
}
