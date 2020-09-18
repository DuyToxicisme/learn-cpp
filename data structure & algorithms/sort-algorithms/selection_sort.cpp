#include <iostream>
#include <string>
// Selection Sort - O(n^2) - sắp xếp chọn
// Sắp xếp tăng dần các phần tử

using namespace std;

// Xuất mảng
void Xuatmang(int arr[], int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<'\t';
    }
}
// Đổi chỗ 2 phần tử
void swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b=temp;
}
/*
    Ý tưởng: sắp xếp phần tử nhỏ nhất đưa lên đầu
    - chia mảng thành 2 mảng con: mảng đã được sắp xếp và mảng chưa được sắp xếp
    - cứ mỗi lần lặp thì phần tử nhỏ nhất ở mảng con chưa được sắp xếp sẽ được đưa lên đầu mảng đã được sắp xếp
*/
void selectionSort(int arr[], int n) {
    for( int i = 0; i< n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap( &arr[i], &arr[min_index]);
    }
}

int main()
{
    int a[] = {4,7,2,0,10,3,41,100,56};
    int lenght = sizeof(a) / sizeof(int);
    Xuatmang(a,lenght);
    cout<<"\nSau khi sắp xếp"<<endl;
    selectionSort(a, lenght);
    Xuatmang(a,lenght);
    return 0;
}
