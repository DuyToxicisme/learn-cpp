#include <iostream>
#include <cmath>
using namespace std;

//Viết chương trình nhập vào một mảng số tự nhiên. Hãy xuất ra màn hình:
/*
- Dòng 1: gồm các số lẻ, tổng cộng có bao nhiêu số lẻ.
- Dòng 2: gồm các số chẵn, tổng cộng có bao nhiêu số chẵn.
- Dòng 3: gồm các số nguyên tố.
- Dòng 4: gồm các số không phải là số nguyên tố
*/

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

int main()
{
    int *arr = new int[10];
    int n;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int demle = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            cout<<arr[i]<<'\t';
            demle++;
        }
    }
    cout<<"------->Số phần tử lẻ là: "<< demle << endl;
    int demchan = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            cout<<arr[i]<<'\t';
            demchan++;
        }
    }
    cout<<"------->Số phần tử chẵn là: "<< demchan << endl;

    int demNT = 0;
    for (int i = 0; i < n; i++) {
        if(checkNT(arr[i]) == true) {
            cout<<arr[i]<<'\t';
            demNT++;
        }
    }
    cout<<"------->Số phần tử là số nguyên tố là: "<< demNT << endl;
    for (int i = 0; i < n; i++) {
        if(checkNT(arr[i]) == false) {
            cout<<arr[i]<<'\t';
        }
    }
    cout<<"------->Số phần tử  không phải là số nguyên tố là: "<<n - demNT<<endl;
}
