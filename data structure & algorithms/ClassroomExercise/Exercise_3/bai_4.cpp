#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

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

int partition(int arr[], int low, int high, int n)
{
    int pivot = arr[high];
    int left = low;
    int right = high - 1;
    while(true)
    {
        while(left <= right && arr[left] < pivot)
            left++;
        while(left <= right && pivot < arr[right])
            right--;
        if (left >= right)
            break;
        swap(&arr[left], &arr[right]);
        left++, right--;
    }
    swap(&arr[left], &arr[high]);
    xuatMang(arr, n);
    cout << endl;
    return left;
}

void quickSort(int arr[], int low, int high, int n)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high, n);
        quickSort(arr, low, pivot - 1, n);
        quickSort(arr, pivot + 1, high, n);
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
    quickSort(arr,0, n-1, n);
    xuatMang(arr, n);
}
