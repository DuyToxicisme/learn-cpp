#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct dslk
{
    Node *first = NULL;
    Node *last = NULL;
};

Node *createNode(int x)
{
    Node *p = new Node;
    if (p == NULL)
    {
        return NULL;
    }
    p->data = x;
    p->next = NULL;
    return p;
}
void init(dslk &l)
{
    l.first = NULL;
    l.last = NULL;
}
Node *addElement(Node *p, int x) {
    Node *tmp = createNode(x);
    p -> next = tmp;
    return tmp;
}
bool isEmpty(const dslk &L)
{
    if (L.first == NULL)
        return true;
    else
        return false;
}
int size(const dslk &L)
{
    int size = 0;
    for (Node *p = L.first; p != NULL; p = p->next)
        size++;
    return size;
}
void infoList(dslk L)
{
    if (isEmpty(L))
    {
        printf("Danh sach khong co phan tu nao");
    }
    else
    {
        cout << ("danh sach phan tu: ");
        for (Node *p = L.first; p != NULL; p = p->next)
        {
            cout << p->data << "\t";
        }
    }
}
void insertHead(dslk &L, Node *p)
{
    if (isEmpty(L))
    {
        L.first = L.last = p;
    }
    else
    {
        p->next = L.first;
        L.first = p;
    }
}
void insertLast(dslk &L, Node *p) {
    if (isEmpty(L))
    {
        L.first = L.last = p;
    }
    else
    {
        L.last->next = p;
        L.last = p;
    }
}
void insertElements(int n, int arr[]) {
    for (int i =0; i< n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        Node *elements = createNode(arr[i]);
    }
}

int main()
{
    dslk list;
    int f_element, l_element;
    cout << "phan tu dau = " ; cin >> f_element;
    Node *newfirstNode = createNode(f_element);
    insertHead(list, newfirstNode);
    cout << "phan tu cuoi = "; cin >> l_element;
    Node *newlastNode = createNode(l_element);
    insertLast(list, newlastNode);
    int spt;
    cout << "nhap so phan tu can them: ";
    cin >> spt;
    int *arr = new int[10];
    for (int i =0; i< spt; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        Node *cc = createNode(arr[i]);
        insertHead(list, cc);
    }

    
    //in danh sách các phần tử
    infoList(list);
}
