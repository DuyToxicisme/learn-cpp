#include <iostream>

using namespace std;

int main()
{
    int arr[100] ;
    int n = 20;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%50 + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<'\t';
    }
    int MAX = arr[0];
    int dem = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > MAX)
        {
            dem = 1;
            MAX = arr[i];
        }
        else if(arr[i] == MAX)
        {
            dem++;
        }
    }
    cout<<"\nMax = "<<MAX<<endl;
    cout<<"So so max: "<<dem<<endl;
    return 0;
}
