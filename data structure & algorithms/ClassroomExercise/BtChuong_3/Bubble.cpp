#include <iostream>
using namespace std;

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << '\t';
    }
}

void swap(int *x,int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i],a[j]);
            }
        }
        cout << "i = " <<i<< "\t  ";
        xuatMang(a, n);
        cout << endl;
    }
}

int main()
{
    int arr[] = { 12,13,9,25,7,31,3,37,14,22,15 };
    int lenght = sizeof(arr) / sizeof(int);
    bubbleSort(arr, lenght);
    cout << "Kết quả sau khi sắp xếp :" << endl;
    xuatMang(arr, lenght);
}
/*
    12,13,9,25,7,31,3,37,14,22,15
    
*/
