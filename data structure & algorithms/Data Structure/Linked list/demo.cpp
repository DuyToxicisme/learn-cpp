#include <iostream>
#include <cstring>
using namespace std;

struct node {
    int data; // dữ liệu chứa trong 1 cái node
    struct node *pNext; // con trỏ dùng để liên kết giữa các node với nhau
};
typedef struct node NODE; // thay thế cho việc phải sử dụng "struct node" thành "NODE"
// khai báo danh sách
struct list {
    NODE *pHead; // node quản lý đầu sanh sách
    NODE *pTail; // node quản lý cuối danh sách
};
typedef struct list LIST; //thay thế cho việc phải sử dụng "struct list" thành "LIST"

// khởi tạo cấu trúc danh sách liên kết đơn các số nguyên
void KhoiTao(LIST &l) {
    // cho 2 node trỏ đến NULL - vì danh sách liên kết đơn chưa có phần tử
    l.pHead = NULL;
    l.pTail = NULL;
}
// Hàm khởi tạo 1 node
NODE *KhoiTaoNode(int x) {
    NODE *p = new NODE; // cấp phát vùng nhớ cho NODE P
    if (p == NULL) {
        cout << "cap phat that bai: ";
        return NULL;
    }
    p -> data = x; // truyền giá trị x vào cho data
    p -> pNext = NULL; // đầu tiên khai báo node thì node đó chưa có liên kết
    return p; // trả về NODE p vừa khởi tạo
}
// Thêm node vào đầu danh sách liên kết
void ThemVaoDau(LIST &l, NODE *p) {
    if (l.pHead == NULL) { // danh sách đang rỗng
        l.pHead = l.pTail = p;
    } else {
        p -> pNext = l.pHead; // cho con trỏ của node p liên kết đến node đầu(pHead)
        l.pHead = p; // cập nhật lại pHead = p
    }
}
// Thêm node vào cuối danh sách liên kết đơn
void ThemVaoCuoi(LIST &l, NODE *p) {
    if (l.pHead == NULL) { // danh sách đang rỗng
        l.pHead = l.pTail = p;
    } else {
        l.pTail -> pNext = p; // cho con trỏ của pTail liên kết với node p
        l.pTail = p; // cập nhật node cuối
    }
}
// in ra danh sách liên kết đơn
void XuatDanhSach(LIST l) {
    for (NODE *k = l.pHead; k != NULL; k = k -> pNext) {
        cout << k -> data << " ";
    }
}
int TimMax(LIST l) {
    int max = l.pHead -> data;
    // duyệt từ node thứ 2 để kiểm tra
    for (NODE *k = l.pHead -> pNext; k != NULL; k = k -> pNext) {
        if (max < k->data) {
            max = k->data;
        }
    }
    return max;
}

int main()
{
    LIST l;
    KhoiTao(l); // khởi tạo danh sách liên kết đơn
    int n;
    cout << "nhap so luong node can them: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "nhap gia tri so nguyen: ";
        cin >> x;
        NODE *p = KhoiTaoNode(x); // khởi tạo 1 node số nguyên
        ThemVaoDau(l, p); // Thêm node p vào đầu danh sách liên kết đơn
    }
    cout << "danh sach lien ket don:";
    XuatDanhSach(l);
    cout << "\nGia tri lon nhat cua danh sach : ";
    TimMax(l);
    cout << endl;
    return 0;
}
