#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    fstream f;
    f.open("input.txt", ios::in);
    string data;
    string line;

    while (!f.eof())
    {
        getline(f, line);
        data += line + '\n';
    }

    f.close();
    cout << data;
}
