#include <iostream>
#include <cstring>
using namespace std;

// Sắp xếp tăng dần

void swap (int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void SelectionSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; i++) {
            if (a[min_idx] > a[j]) {
                min_idx = j;
                swap(a[min_idx], a[j]);
            }
        }
    }
}

void Xuatmang(int a[], int lenght) {
    for (int i = 0; i < lenght; i++) {
        cout << a[i] <<'\t';
    }
}

int main()
{
    int arr[] = {14,4,6,5,2,3,7,9,13,15};
    int lenght = sizeof(arr) / sizeof(int);
    SelectionSort(arr, lenght);
    Xuatmang(arr, lenght);
}
