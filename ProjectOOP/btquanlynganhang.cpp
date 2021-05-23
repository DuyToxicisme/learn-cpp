#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class TK
{
    int so_taikhoan;
    char ten_taikhoan[50];
    int tiengui;
    char mk[20];

public:
    void dangnhap_taikhoan();
    void tao_taikhoan();
    void hienthi_taikhoan() const;
    void sua_doi();
    void sotien_gui(int);
    void sotien_rut(int);
    void kiemtra_sodu() const;
    int trave_so_taikhoan() const;
    int trave_tiengui() const;
    char trave_mk() const;
};
int dang_nhap_he_thong(char userName)
{
    cout << "Ban la (c/s) : ";
    cin >> userName; // customer và supplier
    if (userName == 'c')
    {
        cout << "Dang nhap vao tai khoan nguoi dung" << endl;
        return 1;
    }
    if (userName == 's')
    {
        cout << "Dang nhap vao tai khoan nguoi quan ly" << endl;
        return 2;
    }
    else
    {
        cout << "Ban nhap khong hop le" << endl;
    }
    return 0;
}

void TK::dangnhap_taikhoan(){
    cout << "\n\t\t\tNhap ma tai khoan: ";
    cin >> so_taikhoan;
    cout << "\n\t\t\tNhap mat khau: ";
    cin>> mk;
    cout << so_taikhoan << "   " << mk;
    cout << "\n\t\t\tDANG NHAP THANH CONG";
}

void TK::tao_taikhoan()
{
    cout << "\n\t\t\tNhap ma tai khoan : ";
    cin >> so_taikhoan;
    cout << "\n\n\t\t\tNhap ten tai khoan : ";
    cin.ignore();
    cin.getline(ten_taikhoan, 50);
    cout << "\n\t\t\tNhap mat khau : ";
    cin >> mk;
    cout << "\n\t\t\tNhap so tien ban dau : ";
    cin >> tiengui;
    cout << "\n\n\t\t\tTK duoc tao xong!..";
}

void TK::hienthi_taikhoan() const
{
    cout << "\n\t\t\tSo tai khoan : " << so_taikhoan;
    cout << "\n\t\t\tTen chu tai khoan : ";
    cout << ten_taikhoan;
    cout << "\n\t\t\tSo du : " << tiengui;
}

void TK::sua_doi()
{
    cout << "\n\t\t\tSo tai khoan : " << so_taikhoan;
    cout << "\n\t\t\tSua doi ten chu tai khoan : ";
    cin.ignore();
    cin.getline(ten_taikhoan, 50);
    cout << "\n\t\t\tSua doi mat khau : ";
    cin >> mk;
    cout << "\n\t\t\tSua doi so du : ";
    cin >> tiengui;
}

void TK::sotien_gui(int x)
{
    tiengui += x;
}

void TK::sotien_rut(int x)
{
    tiengui -= x;
}

void TK::kiemtra_sodu() const
{
    cout << so_taikhoan << setw(10) << " " << ten_taikhoan << setw(30) << tiengui << endl;
}

int TK::trave_so_taikhoan() const
{
    return so_taikhoan;
}

int TK::trave_tiengui() const
{
    return tiengui;
}

char TK::trave_mk() const
{
    return mk[20];
}
void dangnhap_taikhoan();
void luu_taikhoan();
void display_sp(int);
void suadoi_TK(int);
void xoa_TK(int);
void display_all();
void gui_va_rut_tien(int, int);
void chuyen_khoan(int, int, int);

int main()
{
    char ch;
    int num;
    char userName;

    if (dang_nhap_he_thong(userName) == 1)
    {
        do
        {
            cout << "\n\n\t\t\t\t======================\n";
            cout << "\t\t\t\tHE THONG QUAN LY NGAN HANG TRUC TUYEN";
            cout << "\n\t\t\t\t======================\n";

            cout << "\t\t\t\t ::MENU NGUOI DUNG::\n";
            cout << "\n\t\t\t\t1. DANG NHAP";
            cout << "\n\t\t\t\t2. GUI TIEN VAO TAI KHOAN";
            cout << "\n\t\t\t\t3. RUT TIEN";
            cout << "\n\t\t\t\t4. CHUYEN KHOAN";
            cout << "\n\t\t\t\t5. KIEM TRA SO DU TK";
            cout << "\n\t\t\t\t6. THOAT";
            cout << "\n\n\t\t\t\tNhap tuy chon cua ban (1-6): ";
            cin >> ch;

            switch (ch)
            {
            case '1':
                dangnhap_taikhoan();
                break;
            case '2':
                cout << "\n\n\t\t\tNhap So tai khoan : ";
                cin >> num;
                gui_va_rut_tien(num, 1);
                break;
            case '3':
                cout << "\n\n\t\t\tNhap So tai khoan : ";
                cin >> num;
                gui_va_rut_tien(num, 2);
                break;
            case '4':
                int a, b, c;
                cout << "\nNhap so tai khoan nguoi chuyen: ";
                cin >> a;
                cout << "\nNhap so tai khoan nguoi nhan: ";
                cin >> b;
                cout << "\nNhap so tien can chuyen: ";
                cin >> c;
                chuyen_khoan(a, 1, c);
                chuyen_khoan(b, 2, c);
                break;
            case '5':
                cout << "\n\n\t\t\tNhap So tai khoan : ";
                cin >> num;
                display_sp(num);
                break;

            case '6':
                cout << "\n\n\t\t\tKet thuc!";
                break;
            default:
                cout << "\a";
            }
            cin.ignore();
            cin.get();
        } while (ch != '8');
    }

    if (dang_nhap_he_thong(userName) == 2)
    {
        do
        {
            cout << "\n\n\t\t\t\t======================\n";
            cout << "\t\t\t\tHE THONG QUAN LY NGAN HANG TRUC TUYEN";
            cout << "\n\t\t\t\t======================\n";

            cout << "\t\t\t\t ::MENU NGUOI QUAN LY::\n";
            cout << "\n\t\t\t\t1. TAO TAI KHOAN NGUOI DUNG";
            cout << "\n\t\t\t\t2. XEM DANH SACH TAI KHOAN";
            cout << "\n\t\t\t\t3. XOA TAI KHOAN";
            cout << "\n\t\t\t\t4. SUA TAI KHOAN";
            cout << "\n\t\t\t\t5. THOAT";
            cout << "\n\n\t\t\t\tNhap tuy chon cua ban (1-5): ";
            cin >> ch;

            switch (ch)
            {
            case '1':
                luu_taikhoan();
                break;
            case '2':
                display_all();
                break;
            case '3':
                cout << "\n\n\t\t\tNhap So tai khoan : ";
                cin >> num;
                xoa_TK(num);
                break;
            case '4':
                cout << "\n\n\t\t\tNhap So tai khoan : ";
                cin >> num;
                suadoi_TK(num);
                break;
            case '5':
                cout << "\n\n\t\t\tKet thuc!";
                break;
            default:
                cout << "\a";
            }
            cin.ignore();
            cin.get();
        } while (ch != '8');
    }

    return 0;
}

void dangnhap_taikhoan()
{
    TK ac;
    ac.dangnhap_taikhoan();
}
void luu_taikhoan()
{
    TK ac;
    ofstream outFile;
    outFile.open("taikhoan.txt", ios::app);
    ac.tao_taikhoan();
    outFile.write(reinterpret_cast<char *>(&ac), sizeof(TK));
    outFile.close();
}

void display_sp(int n)
{
    TK ac;
    bool flag = false;
    ifstream inFile;
    inFile.open("taikhoan.txt", ios::in);
    if (!inFile)
    {
        cout << "Khong the mo file !! Nhan phim bat ky...";
        return;
    }
    cout << "\n\t\t\tCHI TIET TAI KHOAN\n";
    while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(TK)))
    {
        if (ac.trave_so_taikhoan() == n)
        {
            ac.hienthi_taikhoan();
            flag = true;
        }
    }
    inFile.close();
    if (flag == false)
        cout << "\n\n\t\t\tSo tai khoan khong ton tai!";
}

void suadoi_TK(int n)
{
    bool found = false;
    TK ac;
    fstream File;
    File.open("taikhoan.txt", ios::in | ios::out);
    if (!File)
    {
        cout << "Khong the mo tep !! Nhan phim bat ky...";
        return;
    }
    while (!File.eof() && found == false)
    {
        File.read(reinterpret_cast<char *>(&ac), sizeof(TK));
        if (ac.trave_so_taikhoan() == n)
        {
            ac.hienthi_taikhoan();
            cout << "\n\n\t\t\tNhap thong tin moi cho tai khoan" << endl;
            ac.sua_doi();
            int pos = (-1) * static_cast<int>(sizeof(TK));
            File.seekp(pos, ios::cur); //fncallat1353
            File.write(reinterpret_cast<char *>(&ac), sizeof(TK));
            cout << "\n\n\t\t\tCap nhat xong!";
            found = true;
        }
    }
    File.close();
    if (found == false)
        cout << "\n\n\t\t\tKhong tim thay tai khoan! ";
}

void xoa_TK(int n)
{
    TK ac;
    ifstream inFile;
    ofstream outFile;
    inFile.open("taikhoan.txt", ios::in);
    if (!inFile)
    {
        cout << "Khong the mo tep !! Nhan phim bat ky...";
        return;
    }
    outFile.open("Temp.txt", ios::out);
    inFile.seekg(0, ios::beg);
    while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(TK)))
    {
        if (ac.trave_so_taikhoan() != n)
        {
            outFile.write(reinterpret_cast<char *>(&ac), sizeof(TK));
        }
    }
    inFile.close();
    outFile.close();
    remove("taikhoan.txt");
    rename("Temp.txt", "taikhoan.txt");
    cout << "\n\nTai khoan da xoa!";
}

void display_all()
{
    TK ac;
    ifstream inFile;
    inFile.open("taikhoan.txt", ios::in);
    if (!inFile)
    {
        cout << "Khong the mo tep !! Nhan phim bat ky...";
        return;
    }
    cout << "\n\n\t\tDANH SACH CHU TAI KHOAN\n\n";
    cout << "====================================================\n";
    cout << "So du chu tai khoan\n";
    cout << "====================================================\n";
    while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(TK)))
    {
        ac.kiemtra_sodu();
    }
    inFile.close();
}

void gui_va_rut_tien(int n, int option)
{
    int amt;
    bool found = false;
    TK ac;
    fstream File;
    File.open("taikhoan.txt", ios::in | ios::out);
    if (!File)
    {
        cout << "Khong the mo tep !! Nhan phim bat ky...";
        return;
    }
    while (!File.eof() && found == false)
    {
        File.read(reinterpret_cast<char *>(&ac), sizeof(TK));
        if (ac.trave_so_taikhoan() == n)
        {
            ac.hienthi_taikhoan();
            if (option == 1)
            {
                cout << "\n\n\t\t\tGUI TIEN VAO TAI KHOAN";
                cout << "\n\n\t\t\tNhap so tien gui: ";
                cin >> amt;
                ac.sotien_gui(amt);
            }
            if (option == 2)
            {
                cout << "\n\n\t\t\tRUT TIEN";
                cout << "\n\n\t\t\tNhap so tien rut: ";
                cin >> amt;
                int bal = ac.trave_tiengui() - amt;
                if (bal < 0)
                    cout << "So du khong du de thuc hien rut tien";
                else
                    ac.sotien_rut(amt);
            }
            int pos = (-1) * static_cast<int>(sizeof(ac));
            File.seekp(pos, ios::cur); //fn1353
            File.write(reinterpret_cast<char *>(&ac), sizeof(TK));
            cout << "\n\n\t\t\tCap nhat xong!";
            found = true;
        }
    }
    File.close();
    if (found == false)
        cout << "\n\n\t\t\tKhong tim thay tai khoan! ";
}

void chuyen_khoan(int n, int option, int so_tien)
{
    bool found = false;
    TK ac;
    fstream File;
    File.open("taikhoan.txt", ios::in | ios::out);
    if (!File)
    {
        cout << "Khong the mo tep !! Nhan phim bat ky...";
        return;
    }
    while (!File.eof() && found == false)
    {
        File.read(reinterpret_cast<char *>(&ac), sizeof(TK));
        if (ac.trave_so_taikhoan() == n)
        {
            if (option == 1)
            {
                int bal = ac.trave_tiengui() - so_tien;
                if (bal < 0)
                    cout << "So du khong du de thuc hien chuyen tien";
                else
                    ac.sotien_rut(so_tien);
            }
            if (option == 2)
            {
                ac.sotien_gui(so_tien);
            }
            int pos = (-1) * static_cast<int>(sizeof(ac));
            File.seekp(pos, ios::cur); //fn1353
            File.write(reinterpret_cast<char *>(&ac), sizeof(TK));
            cout << "\n\n\t\t\tCap nhat xong!";
            found = true;
        }
    }
    File.close();
    if (found == false)
        cout << "\n\n\t\t\tKhong tim thay tai khoan! ";
}
