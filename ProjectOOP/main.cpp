#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class NamSinh
{
private:
    int ngay, thang, nam;

public:
    int Getter_Ngay()
    {
        return ngay;
    }
    int Setter_Ngay(int NGAY)
    {
        ngay = NGAY;
    }
    int Getter_Thang()
    {
        return thang;
    }
    int Setter_Thang(int THANG)
    {
        thang = THANG;
    }
    int Getter_Nam()
    {
        return nam;
    }
    int Setter_Nam(int NAM)
    {
        nam = NAM;
    }
};

class NhanVien
{
protected:
    string maNhanVien;
    string tenNhanVien;
    NamSinh namsinh;
    string diachi;
    float luongCoBan;
    float heSoLuong;

public:
    virtual void Doc_File(ifstream &);
    void Xuat();
};

void NhanVien::Doc_File(ifstream &filein)
{
    getline(filein, maNhanVien, ',');
    filein.seekg(1,1); // Dịch con trỏ chỉ vị của file sang phải 1 byte
    getline(filein, tenNhanVien, ',');
    filein >> ngay;
    namsinh.Getter_Ngay(ngay);
}

class Programer : public NhanVien
{
private:
    float tienLamThem;

public:
    virtual void Doc_File(ifstream &);
};

class Designer : public NhanVien
{
private:
    float tienThuong;

public:
    virtual void Doc_File(ifstream &);
};

int main()
{

    return 0;
}
