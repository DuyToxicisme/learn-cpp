#include <iostream>
using namespace std;

class point
{
private:
    float x, y;

public:
    point(float _x = 0, float _y = 0)
    {
        x = _x, y = _y;
    }
    point(point &p)
    {
        x = p.x;
        y = p.y;
    }
    void display()
    {
        cout << "x = " << x << " y = " << y;
    }
};

class circle : public point
{
private:
    float r;

public:
    circle(float _x = 0, float _y = 0, float _r = 0) : point(_x, _y)
    {
        r = _r;
    }
    void display()
    {
        point::display();
        cout << " r = " << r;
    }
    float dientich()
    {
        return 3.14 * r * r;
    }
    friend int operator>(circle c1, circle c2);
};

int operator>(circle c1, circle c2)
{
    return c1.dientich() > c2.dientich();
}

int main()
{
    float x, y, r;
    cout << "Nhap toa do x,y va r: ";
    cin >> x >> y >> r;
    circle c(x, y, r);
    c.display();
}
