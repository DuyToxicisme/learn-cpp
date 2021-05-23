#include <iostream>
#include <string.h>
using namespace std;

class Media
{
private:
    char ten[50];
    int giaban;

public:
    void set(char _ten[], int _giaban)
    {
        strcpy(ten, _ten);
        giaban = _giaban;
    }
    void nhap()
    {
        cout << "Nhập tên phương tiện : ";
        cin >> ten;
        cout << "Giá bán : ";
        cin >> giaban;
    }
    void display()
    {
        cout << "Ten phuong tien: " << ten << ", "
             << "gia ban: " << giaban;
    }
};

int main()
{

    return 0;
}
