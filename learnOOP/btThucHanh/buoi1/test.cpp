#include <iostream>
#include <cstring>
using namespace std;

class people
{
public:
    string firstName;
    string lastName;
    int age;
};

int main()
{
    people John;
    John.firstName = "Micro";
    John.lastName = "John";
    John.age = 21;

    cout << "he is name : " << John.firstName + ' ' + John.lastName << "\tage : " << John.age;
}
