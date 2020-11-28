#include <iostream>
using namespace std;
// Thao tác trên hàng đợi

int queue[10];      //mảng 1 chiều mô phỏng cho hàng đợi
int front = 0;      // chỉ số phần tử đang ở đầu queue
int rear = 4;       // chỉ số của phần tử tiếp theo được thêm vào cuối queue
int arraySize = 20; // Kích thước tối đa của queue

void enqueue(int x) // thêm 1 phần tử
{
    if (rear == arraySize)
    {
        cout << "\nOverflow";
    }
    else
    {
        queue[rear++] = x;
    }
}
void dequeue() // xóa 1 phần tử
{
    if (front == rear)
    {
        cout << "\nUnderflow";
    }
    else
    {
        cout << "\n"
             << queue[front++] << " deleted";
        for (int i = front; i < rear; i++)
        {
            queue[i - front] = queue[i];
        }
        rear = rear - front;
        front = 0;
    }
}
void peek() // lấy phần tử trên cùng
{
    cout << "Topmost element: " << queue[-1];
}
void isFull(int front, int rear) // Kiểm tra xem queue đã đầy chưa
{
    int size = rear - front;
    if (size = arraySize)
    {
        cout << "Queue da day ";
    }
}
void isEmpty(int front, int rear) // Kiểm tra Queue có đang rỗng không
{
    if (front = rear)
    {
        cout << "Queue dang trong ";
    }
}

int main()
{
    int select, x;
    cout << "\n1. enqueue";
    cout << "\n2. dequeue";
    cout << "\n3. peek";
    cout << "\n4. isFull";
    cout << "\n5. isEmpty";
    cout << "\nChon thao tac : ";
    cin >> select;
    switch (select)
    {
    case 1:
        cout << "ban muon them phan tu nao: ";
        cin >> x;
        enqueue(x);
        break;
    case 2:
        dequeue();
        break;
    case 3:
        peek();
        break;
    case 4:
        isFull(front, rear);
        break;
    case 5:
        isEmpty(front, rear);
        break;
    default:
        cout << "ban chua chon thao tac!";
        break;
    }

    return 0;
}
