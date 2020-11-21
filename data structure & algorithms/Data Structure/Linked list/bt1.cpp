#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};
typedef struct node NODE;

struct list {
    NODE *first;
    NODE *last;
};
typedef struct list LIST;
// khởi tạo danh sách
void Create(LIST &l) {
    l.first= NULL;
    l.last = NULL;
}
// Hàm khởi tạo 1 node
NODE *CreateNode(int x) {
    NODE *p = new NODE;
    if (p == NULL) {
        cout << "Danh sach trong: ";
        return NULL;
    }
    p -> data = x;
    p -> next = NULL;
    return p;
}
// Thêm vào đầu
void InsertFirst(LIST &l, NODE *p) {
    if (l.first == NULL) {
        l.first = l.last = p;
    } else {
        p -> next = l.first;
        l.first = p;
    }
}
// Thêm vào cuối
void InsertLast(LIST &l, NODE *p) {
    if (l.first == NULL) {
        l.first = l.last = p;
    } else {
        l.last -> next = p;
        l.last = p;
    }
}
// In danh sách các phần tử
void InforList(LIST l) {
    for (NODE *k = l.first; k != NULL; k = k -> next) {
        cout << k -> data << " ";
    }
}
// hiện thị node thứ n
// NODE displayNode(LIST l, int index) {
//     for (NODE *k = l.first; k != NULL; k = k -> next) {
//         if ( index == 0) {
//             return k;
//         }
//         index--;
//     }
//     return NULL;
// }

// Đếm số lượng node của danh sách
int sizeList(LIST l) {
    int size = 0;
    for (NODE *k = l.first; k != NULL; k = k -> next) {
        size++;
    }
    return size;
}
int main()
{
    LIST l;
    Create(l);
    int nfirst, nlast;
    cout << "nhap so luong node can them vao dau: ";
    cin >> nfirst;
    for (int i = 0; i < nfirst; i++) {
        int x;
        cout << "nhap gia tri so nguyen: ";
        cin >> x;
        NODE *p = CreateNode(x);
        InsertFirst(l, p);
    }
    cout << "nhap so luong node can them vao cuoi: ";
    cin >> nlast;
    for (int i = 0; i < nlast; i++) {
        int x;
        cout << "nhap gia tri so nguyen: ";
        cin >> x;
        NODE *p = CreateNode(x);
        InsertLast(l, p);
    }
    cout << "DANH SACH LIEN KET:";
    InforList(l);
    // int index;
    // cout << "Ban muon hien thi node thu bao nhieu: ";
    // cin >> index;
    // displayNode(l, index);
    cout << "So luong phan tu cua danh sach: " << sizeList(l);

    cout << endl;
    return 0;
}
