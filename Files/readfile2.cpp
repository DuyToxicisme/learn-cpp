#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream ifs("input.txt");
    string s;
    while (!ifs.eof()) // eof : end of file
    {
        ifs >> s;
        cout << s << endl;
    }

    ifs.close();
    return 0;
}
