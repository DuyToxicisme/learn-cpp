#include <iostream>
#include <cstring>

using namespace std;

// In ra quá trình các bước sắp xếp

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

void selectionSort(int arr[], int n) {
    for( int i = 0; i< n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap( &arr[i], &arr[min_index]);

        Xuatmang(arr, n);
        cout<< endl;
    }
}

int main()
{
    int a[] = {14,4,6,5,2,3,7,9,13,15};
    int lenght = sizeof(a) / sizeof(int);
    // Xuatmang(a,lenght);
    cout<<"\n\Quá trình sắp xếp"<<endl;
    selectionSort(a, lenght);
    // Xuatmang(a,lenght);
    return 0;
}
