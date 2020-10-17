#include <iostream>
using namespace std;

// sắp xếp chọn

void nhapMang(int a[], int n){
    for (int i = 0; i<n; i++) {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i<n; i++) {
        cout << a[i] << "\t";
    }
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        swap( &a[i], &a[min_index]);
        xuatMang(a, n);
        cout<< endl;
    }
}

int main()
{
    int n;
    cout << "Nhập số phần tử của mảng: "; cin >> n;
    int *arr = new int[10];
    nhapMang(arr, n);
    selectionSort(arr, n);
    xuatMang(arr, n);
}
