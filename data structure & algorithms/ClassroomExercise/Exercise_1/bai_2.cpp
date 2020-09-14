#include <iostream>
using namespace std;

//Viết một hàm đảo ngược thứ tự các phần tử của một mảng số nguyên.

int main()
{
    int *arr = new int[6];
    int n;
    cout << "Nhap so phan tu cua mang: ";  cin >> n;
    for (int i = 0; i < n; i++) {
        cout<<"arr["<< i << "] = ";
        cin>> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i] << '\t';
    }
    cout<<"\nin dao nguoc"<<"\n";
    for (int i = n-1; i >= 0; i--) {
        cout << arr[i]<<'\t';
    }
    cout<<endl;
    return 0;
}