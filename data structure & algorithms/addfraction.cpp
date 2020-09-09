#include <iostream>
using namespace std;
// tính tổng 2 phân số (tối giản kq)
struct phanso {
    int tuso;
    int mauso;
};

void NhapPS(phanso &x)
{
    cout<<"Nhap tu so: ";
    cin>>x.tuso;
    do
    {
        cout<<"Nhap mau so: ";
        cin>>x.mauso;
        if(x.mauso == 0) 
        {
            cout<<"vui long nhap lai phan so";
        }
    } while (x.mauso == 0); 
}

int UCLN(phanso &p)
{
    if(p.tuso = p.mauso)
    {
        return p.tuso;
    }
    else if(p.tuso > p.mauso)
    {
        p.tuso -= p.mauso;
    }
    else if(p.tuso < p.mauso)
    {
        p.mauso -= p.tuso;
    }
}

// phanso ToigianPS(phanso &p)
// {
//     if (p.tuso == p.mauso)
//     {
//         return 1;
//     }
//     return (p.tuso / UCLN(p)) / (p.mauso / UCLN(p));
// }

int main() 
{
    phanso x,y;
    cout<<"Nhap Phan so x"<<endl;
    NhapPS(x);
    cout<<"Nhap Phan so y"<<endl;
    NhapPS(y);

    cout<<endl;
    return 0;
}