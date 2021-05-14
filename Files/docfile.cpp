#include <iostream>
#include <fstream>
using namespace std;

void showInfo(int *a, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\nDONE";
}

int main()
{
    // ở file -> đọc dữ liệu -> đóng file
    //fstream ifs("input.txt", ios::in); // lấy dữ liệu
    ifstream ifs2("input.txt");

    size_t n;
    int *arr;
    ifs2 >> n;
    arr = new int[n];

    for (size_t i = 0; i < n; i++)
    {
        ifs2 >> arr[i];
    }

    showInfo(arr, n);



    ifs2.close();
    return 0;
}
