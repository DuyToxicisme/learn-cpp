#include <iostream>
#include <math.h>
using namespace std;

bool checkNT(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if( n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;
    cout<<"Nhap so nguyen: ";
    cin>>a;
    if(checkNT(a) == true)
    {
        cout<<a<<" la so nguyen to"<<endl;
    }
    else
    {
        cout<<a<<" khong phai so nguyen to"<<endl;
    }
    
}