#include <iostream>
using namespace std;

// Sắp xếp chèn O(n^2)

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<"\t";
    }
}

void insertSort(int a[], int n) {
    for (int i = 1; i< n; i++) {
        int t = a[i];
        int j = i -1 ;
        while ( j >= 0 && t < a[j]) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }
}

int main()
{
    int n = 12;
    int *arr = new int[100];
    for( int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }
    printArray(arr, n);
    insertSort(arr, n);
    cout<<"\nSau khi sap xep: \n";
    printArray(arr, n);
    return 0;
}
