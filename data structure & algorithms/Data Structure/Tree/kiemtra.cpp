#include <iostream>
#include <cmath>
using namespace std;

void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "] = ";
        cin>>arr[i];
    }
}

int demSoPTle(int arr[], int n){
    int demle = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 ){
            cout << arr[i] << '\t';
            demle++;
        }
    }
    cout << "có ";
    return demle;
}

int demSoPTchan(int arr[], int n){
    int demchan = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            cout<<arr[i]<<'\t';
            demchan++;
        }
    }
    cout << "có ";
    return demchan;
}

bool checkNT(int x)
{
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i<= sqrt(x); i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}
int demSoPTnguyento(int arr[], int n){
    int demNT = 0;
    for (int i = 0; i < n; i++) {
        if(checkNT(arr[i]) == true) {
            cout<<arr[i]<<'\t';
            demNT++;
        }
    } cout << "có ";
    return demNT;
}
int demSoPTkhongphaiNT(int arr[], int n){
    int demnotNT;
    for (int i = 0; i < n; i++) {
        if(checkNT(arr[i]) == false) {
            cout<<arr[i]<<'\t';
            demnotNT++;
        }
    }
    cout << "có ";
    return demnotNT;
}

int main()
{
    int *arr = new int[15];
    int n;
    cout << "Nhập số phần tử của mảng : ";
    cin >> n;
    cout << "----Nhập mảng----"<<endl;
    nhapMang(arr, n);
    cout << "Số phần tử lẻ là : " << demSoPTle(arr, n) << " số lẻ";
    cout << "\nSố phần tử chẵn là : " << demSoPTchan(arr, n) << " số chẵn";
    cout << "\nSố phần tử nguyên tố là : " << demSoPTnguyento(arr, n) << " số nguyên tố";
    cout << "\nSố phần tử không phải nguyên tố là : " << demSoPTkhongphaiNT(arr, n) << " số không phải nguyên tố";

}
