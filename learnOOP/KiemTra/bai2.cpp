#include <iostream>
#include <cstring>
using namespace std;
// Đề 1 câu 2
class MyAttr
{
private:
    int sohieu;

public:
    MyAttr(int _sh = 0)
    {
        sohieu = _sh;
    }
    void display()
    {
        cout << "Số hiệu của tệp là : " << sohieu << endl;
    }
};

class Mydate
{
private:
    int d, m, y;

public:
    Mydate(int _d, int _m, int _y)
    {
        d = _d;
        m = _m;
        y = _y;
    }
    void display()
    {
        cout << "Ngày - tháng - năm : " << d << " - " << m << " - " << y << endl;
    }
    friend bool operator>(Mydate, Mydate);
};

bool operator>(Mydate d1, Mydate d2)
{
    if (d1.y > d2.y)
        return 1;
    if ((d1.y == d2.y) && (d1.m > d2.m))
        return 1;
    if ((d1.y == d2.y) && (d1.m == d2.m) && (d1.d > d2.d))
        return 1;
    else
        return 0;
}

class Myfile : public MyAttr, public Mydate
{
private:
    char filename[50];
    int filesize;

public:
    Myfile(char _fn[], int _fs, int _d, int _m, int _y, int _sh) : MyAttr(_sh), Mydate(_d, _m, _y)
    {
        strcpy(filename, _fn);
        filesize = _fs;
    }
    void display()
    {
        cout << "Tên tệp : " << filename << ", kích thước file : " << filesize << endl;
        Mydate::display();
        MyAttr::display();
    }
    friend int operator>(Myfile, Myfile);
};
int operator>(Myfile f1, Myfile f2)
{
}

int main()
{
    int n;
    cout << "Mời nhập n : ";
    cin >> n;
    Myfile *f[n];
    for (int i = 0; i < n; i++)
    {
        char fn[50];
        int fs, d, m, y, sh;
        cout << "\nNhập thông tin file thứ : " << i + 1 << ":\n";
        cout << "tên file  =";
        cin >> fn;
        cout << "kích thươc file = ";
        cin >> fs;
        cout << "d-m-y = ";
        cin >> d >> m >> y;
        cout << "số hiệu : ";
        cin >> sh;
        f[i] = new Myfile(fn, fs, d, m, y, sh);
    }

    for (int i = 0; i < n; i++)
    {
        f[i]->display();
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*f[i] > *f[j])
            {
                Myfile t = *f[i];
                *f[i] = *f[j];
                *f[j] = t;
            }
        }
    }

    // cout << "\n Sau khi sắp xếp \n";
    // for (int i = 0; i < n; i++)
    //     f[i]->display();

    return 0;
}
