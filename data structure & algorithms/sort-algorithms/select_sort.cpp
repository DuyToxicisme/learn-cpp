#include <iostream>
#include <string>
// Bubble Sort - O(n^2) -sắp xếp nổi bọt
// Sắp xếp  chọn
// Sắp xếp tăng dần các phần tử
using namespace std;


void Xuatmang(int arr[], int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<'\t';
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int arr[], int &n) {
    for (int i = 0; i< n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main()
{
    int a[] = {4,7,2,0,10,3,41,100,56};
    int lenght = sizeof(a) / sizeof(int);
    Xuatmang(a,lenght);
    cout<<"\nSau khi sắp xếp"<<endl;
    bubbleSort(a, lenght);
    Xuatmang(a,lenght);
    cout<<endl;
}