#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f1, f2;
    f1.open("input.txt", ios::in);
    f2.open("output.txt", ios::out);

    int n;
    while (!f1.eof())
    {
        f1 >> n;
    }
    n *= 10;
    f2 << n;

    f1.close();
    f2.close();

    // Đọc file trong cpp

    // string data2 = "hello world";

    // f2 << data2;

    // f2.close();
    // return 0;
}
