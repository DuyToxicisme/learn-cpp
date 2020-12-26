#include <iostream>
#include <fstream>
using namespace std;

#define Max 100

int main()
{
    fstream f1;
    f1.open("input.txt", ios::in);
    int a[Max][Max];

    while (!f1.eof())
    {
        int n;
        cout << n;
    }

    f1.close();
    return 0;
}
