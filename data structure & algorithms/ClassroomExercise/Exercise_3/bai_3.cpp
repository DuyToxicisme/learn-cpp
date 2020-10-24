#include <iostream>
using namespace std;

// Sắp xếp nổi bọt

void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
        xuatMang(arr, n);
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Nhập số phần tử của mảng: ";
    cin >> n;
    int *arr = new int[10];
    nhapMang(arr, n);
    cout << "Mảng trước khi sắp xếp: \n";
    xuatMang(arr, n);
    cout << "\nCác bước của giải thuật : \n";
    bubbleSort(arr, n);
    cout << "Mảng sau khi sắp xếp : \n";
    xuatMang(arr, n);
}

/*
    10 1 4 9 2 8 0 6
    1 10 4 9 2 0 8 6
    1 4 10 9 0 2 8 6
*/
