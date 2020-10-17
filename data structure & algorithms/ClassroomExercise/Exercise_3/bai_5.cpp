#include <iostream>
using namespace std;

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

void heapify(int arr[], int n, int root)
{
    int largest = root;
    int leftNode = 2*root + 1;
    int rightNode = 2*root + 2;

    if (leftNode < n && arr[leftNode] > arr[largest])
        largest = leftNode;

    if (rightNode < n && arr[rightNode] > arr[largest])
        largest = rightNode;

    if (largest != root)
    {
        swap(arr[root], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int root = n/2 - 1; root >= 0; root--)
        heapify(arr, n, root);
    for (int heapSize = n-1; heapSize >= 0; heapSize--)
    {
        swap(arr[0], arr[heapSize]);
        heapify(arr, heapSize, 0);
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
    cout << "Sau khi sắp xếp :";
    cout << "\nCác bước của giải thuật : \n";
    heapSort(arr, n);
    xuatMang(arr, n);
}
