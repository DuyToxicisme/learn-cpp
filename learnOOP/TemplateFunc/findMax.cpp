#include <iostream>
using namespace std;
// viết template function tìm phần tử lớn nhất trong mảng
// duyệt các phần tử trong mảng

template <class T> // T = Type
T findMax(T a, T b)
{
    return (a > b) ? a : b;
}

template <class T>
void showInfo(T *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    cout << findMax<int>(30, 50) << endl;
    cout << findMax<char>('a', 'z') << endl;
    cout << findMax<float>(1.884, 2.974f) << endl;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};

    showInfo(a, sizeof(a) / sizeof(int));
}
