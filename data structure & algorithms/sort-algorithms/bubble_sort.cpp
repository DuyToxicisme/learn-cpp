#include <iostream>
#include <string>
// Bubble Sort - O(n^2) -sắp xếp nổi bọt

// Sắp xếp tăng dần các phần tử
using namespace std;
//Đánh giá:
/*
    - Đơn giản nhất
    - Không thích hợp với các tập dữ liệu lớn
    - Chậm nhất (vì phải duyệt tất cả các phần tử)
*/

void Xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int &n)
{ //nổi bật phần tử nhỏ nhất lên trước
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                swap(&arr[j], &arr[j - 1]);
            }
        }
        Xuatmang(arr, n);
        cout << endl;
    }
}

void bubbleSortDESC(int arr[], int &n)
{ //nổi bật phần tử lớn nhất lên trước
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
        Xuatmang(arr, n);
        cout << endl;
    }
}

int main()
{
    int a[] = {12, 2, 8, 5, 1, 6, 4, 15};
    int lenght = sizeof(a) / sizeof(int);
    Xuatmang(a, lenght);
    cout << "\nSorted : " << endl;
    bubbleSort(a, lenght);
    Xuatmang(a, lenght);
    cout << "\nSorted DESC: " << endl;
    bubbleSortDESC(a, lenght);
    cout << endl;
}
