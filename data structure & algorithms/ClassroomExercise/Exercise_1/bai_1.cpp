#include <iostream>
using namespace std;

//Cộng 2 phân số đưa kết quả về dạng tối giản

struct phanso {
    int tuso, mauso;
};

void nhapPS(phanso p) {
    cout<<"Nhap tu so:"; cin >> p.tuso;
    do
    {
        cout << "Nhap mau so: ";
        cin >> p.mauso;
    } while (p.mauso == 0);   
}

int ucln(int x, int y) { // Tìm ước chung lớn nhất của tử số & mẫu số
    if (x == 0) {
        return y;
    }
    return ucln( y%x, x );
}

int main()
{
    phanso f1, f2;
    cout << "nhap phan so thu nhat: ";
    nhapPS(f1);
    cout << "nhap phan so thu nhat: ";
    nhapPS(f2);
    phanso f1 = { f1.tuso, f1.mauso };
    phanso f2 = { f2.tuso, f2.mauso };
    
    phanso kq = sumPS(f1, f2);
    cout << "tong 2 phan so la: "<< kq.mauso <<"/"<<kq.mauso <<endl;
    return 0;
}

phanso sumPS(phanso f1, phanso f2) {
    phanso result = { ((f1.tuso * f2.mauso) + (f1.mauso * f2.tuso)) / (f1.mauso * f2.mauso) };
    return result;
}