#include <iostream>
using namespace std;

// xây dựng 1 lớp Mytime mô tả các thông tin về giờ, phút giây, lớp gồm có các thành phần sau

class Mytime
{
private:
    int h, m, s;

public:
    Mytime(int _h = 0, int _m = 0, int _s = 0)
    {
        h = _h;
        m = _m;
        s = _s;
    }
    void Set(int _h = 0, int _m = 0, int _s = 0)
    {
        h = _h;
        m = _m;
        s = _s;
    }
    void display()
    {
        cout << "hh:mm:ss " << h << ":" << m << ":" << s;
    }
    friend int operator>(Mytime t1, Mytime t2);
};

int operator>(Mytime t1, Mytime t2)
{
    if (t1.h > t2.h)
    {
        return 1;
    }
    if ((t1.h > t2.h) && (t1.m > t2.m))
    {
        return 1;
    }
    if ((t1.h > t2.h) && (t1.m > t2.m) && (t1.s > t2.s))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    Mytime *t = new Mytime(n);
    for (int i = 0; i < n; i++)
    {
        int h, m, s;
        cout << "Nhap ngay, gio, phut: ";
        cin >> h >> m >> s;
        t[i].Set(h, m, s);
    }
    Mytime t_max = t[0];
    for (int i = 0; i < n; i++)
    {
        if (t[i] > t_max)
        {
            t_max = t[i];
        }
    }
    cout << "Thoi gian lon nhat : ";
    t_max.display();
}
