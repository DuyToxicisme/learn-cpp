#include <iostream>
using namespace std;
// Đề 1 câu 1

class circle
{
private:
    float r;

public:
    circle()
    {
        r = 0;
    }
    void nhap();
    float dientich();
    void display();

    friend bool operator>(circle, circle);
};
void circle::nhap()
{
    cout << "Nhập bán kính đường tròn: ";
    cin >> r;
}
float circle::dientich()
{
    return r * r * 3.14;
}
void circle::display()
{
    cout << "Bán kính: " << r << '\t';
    cout << "Diện tích: " << dientich() << endl;
}

bool operator>(circle c1, circle c2)
{
    return c1.r > c2.r;
}

int main()
{
    int n;
    cout << "Nhập số đường tròn : ";
    cin >> n;

    circle *ListCircle = new circle[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhập đường tròn thứ " << i + 1 << endl;
        ListCircle[i].nhap();
        ListCircle[i].display();
    }
    circle maxCircle = ListCircle[0];
    for (int i = 1; i < n; i++)
    {
        if (ListCircle[i] > maxCircle)
        {
            maxCircle = ListCircle[i];
        }
    }
    cout << "\nĐường tròn có diện tích lớn nhất là đường tròn có ";
    maxCircle.display();
    return 0;
}
