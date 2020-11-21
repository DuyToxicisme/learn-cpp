#include <iostream>
using namespace std;
// Thao tác stack với array
int *stack;
int top = 0, size;

void push(int x)
{ // lưu trữ 1 phần tử trên ngăn xếp
    if (top == size)
    {
        cout << "Stack overflow!";
    }
    else
    {
        stack[top++] = x;
    }
}
void pop()
{ // Xóa 1 phần tử từ ngăn xếp
    if (top == size)
    {
        cout << "Stack overflow!";
    }
    else
    {
        cout << stack[--top] << "deleted";
    }
}
void show()
{ // Hiện thị stack
    for (int i = 0; i < top; i++)
    {
        cout << stack[i] << " ";
    }
}
void peek()
{
    cout << "Topmost element: " << stack[top - 1];
}

void isFull() {
    if (top == size) {
        cout << "Ngan xep da day!";
    }
}
void isEmpty() {
    if (top == 0) {
        cout << "Ngan xep dang trong!";
    }
}
int main()
{
    cout << "nhap vao kich thuoc cua stack: ";
    cin >> size;
    stack = new int[size];
    int select, x;

    cout << "\n1. Push";
    cout << "\n2. Pop";
    cout << "\n3. show";
    cout << "\n4. peek:";
    cout << "\n5. isFull:";
    cout << "\n6. isEmpty:";
    cout << "\nChon thao tac : ";
    cin >> select;
    switch (select)
    {
    case 1:
        push(x);
        break;
    case 2:
        pop();
        break;
    case 3:
        show();
        break;
    case 4:
        peek();
        break;
    case 5:
        isFull();
        break;
    case 6:
        isEmpty();
        break;
    default:
        cout << "Ban khong co su lua chon nao";
        break;
    }

    return 0;
}
