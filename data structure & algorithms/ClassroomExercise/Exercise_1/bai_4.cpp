#include <iostream>
using namespace std;

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "A[" << i <<"] =";
        cin>>a[i];
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] <<'\t';
    }
}

int searchMaxElement(int a[], int n) {
    int Max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > Max) {
            Max = a[i];
        }
    }
}

int searchMinElement(int a[], int n) {
    int Min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < Min) {
            Min = a[i];
        }
    }
}

int main()
{
    int n;
    int *arr = new int[20];
    cout << "Nhap so phan tu cua mang: ";  cin >> n;
    nhapMang(arr, n);
    xuatMang(arr, n);
    int Max, Min;
    cout << "Phần tử lớn nhất của mảng là : " << searchMaxElement(arr, n);
    cout << "Phần tử bé nhất của mảng là : " << searchMinElement(arr, n);
}
