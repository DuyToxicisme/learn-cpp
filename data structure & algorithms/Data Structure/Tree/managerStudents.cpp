#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

struct sinhvien{
    char masv[20];
    char tensv[40];
    float diemtoan;
    float diemly;
    float diemhoa;
};

struct Node{
    sinhvien data;
    Node *left, *right;
};

typedef Node *Tree;

int sosanh(sinhvien a, sinhvien b)
{
    return strcmp(a.masv, b.masv); // = 0 thì bằng nhau, > 0 thì a lớn hơn b, < 0 thì a bé hơn b
}

sinhvien NhapSv()
{
    sinhvien x;
    cout << "Nhập mã sinh viên :";
    gets(x.masv);
    cout << "Nhập tên sinh viên : ";
    gets(x.tensv);
    cout << "Nhập điểm toán : ";
    while(true)
    {
        cin >> x.diemtoan;
        if(cin.fail() || x.diemtoan > 10 || x.diemtoan < 0)
        {
            // cin.clear();
            // cin.ignore();
            cout << "Nhập lại điểm toán : ";
        }
        else{
            break;
        }
    }

    cout << "Nhập điểm lý : ";
    while(true)
    {
        cin >> x.diemly;
        if(cin.fail() || x.diemly > 10 || x.diemly < 0)
        {
            // cin.clear();
            // cin.ignore();
            cout << "Nhập lại điểm lý : ";
        }
        else{
            break;
        }
    }
    cout << "Nhập điểm hóa : ";
    while(true)
    {
        cin >> x.diemhoa;
        if(cin.fail() || x.diemhoa > 10 || x.diemhoa < 0)
        {
            // cin.clear();
            // cin.ignore();
            cout << "Nhập lại điểm hóa : ";
        }
        else{
            break;
        }
    }
    while(getchar() != '\n');
    return x;
}

int themsv(Tree &T, sinhvien x) {
    if (T != NULL) {
        if(sosanh(T->data, x) == 0) {
            return 1; // đã có trong danh sách
        }
        else if(sosanh(T->data, x) > 0) { // nhập vào sinh viên có giá trị bé hơn dữ liệu đã có
            return themsv(T->left, x); // chèn vào bên trái
        }
        else {
            return themsv(T->right, x); // chèn vào bên phải
        }
    }
    T = (Node *)malloc(sizeof(Node));
    if (T == NULL) {
        return 0;
    }
    T->data = x;
    T->left = T->right = NULL;
    return 1;
}
void createTree(Tree &T) {
    sinhvien x;
    while(true){
        cout << "Nhập thông tin sinh viên : " << endl;
        x = NhapSv();
        if (strcmp(x.masv, "q") || strcmp(x.masv, "Q")) {
            break;
        }
        int check = themsv(T, x);
        if (check < -1) {
            cout << "Danh sách đã tồn tại !" ;
        }
        else if (check == 0) {
            cout << "Thêm thất bại !";
        }
        else {
            cout << "THÊM THÀNH CÔNG !";
        }
    }
}
void xuatSV(sinhvien x) {
    cout << "Mã sinh viên : ";
    cout << "Họ tên sinh viên : ";
    cout << "Điểm Toán : ";
    cout << "Điểm Lý : ";
    cout << "Điểm Hóa : ";
}

void LNR (Tree T) {
    if (T != NULL) {
        LNR(T->left);
        xuatSV(T->data);
        LNR(T->right);
    }
}
int main()
{
    Tree T = NULL;
    createTree(T);
    LNR(T);
    sinhvien x;
    xuatSV(x);
    return 0;
}
