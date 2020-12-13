#include <bits/stdc++.h>

using namespace std;

// In ra quá trình các bước sắp xếp
// Bước 1: duyệt mảng tìm phần tử lớn nhất
// Bước 2 : đổi chỗ đưa lên đầu
// Bước 3 : tương tự với các phần tử khác
int n, a[100];
void Input()
{
    freopen("data.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i< n; i++)
    {
        cin >> a[i];
    }
}

void Output()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '\t';
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Timmax() {
    int max = a[0];
    for ( int i = 0; i< n-1; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
}
void selectionSort()
{
    for ( int i = 0; i< n-1; i++)
    {
        int indexMax = i; // Giả sử vị trí mã là vị trí i
        for (int j = i+ 1; j < n; j++) {
            if (a[j] > a[indexMax]) {
                indexMax = j;   // kiểm tra và tìm phần tử lớn nhất
            }
        }
        if (indexMax != i) {
            swap(a[i], a[indexMax]);  // Đổi chỗ sau khi đã tìm được phần tử max
        }
        Output();
    }

}

int main()
{

    cout << "\nQuá trình sắp xếp" << endl;
    selectionSort();
    // Xuatmang(a,lenght);
    return 0;
}
