#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Person
{
    string name;
    string address;
    string email;
    int age;

public:
    Person();
    Person(int, string, string, string);
    void showInfo();
};

Person::Person()
{
    age = 0;
    name = "";
    address = "";
    email = "";
}
Person::Person(int age, string name, string address, string email)
{
    this->age = age;
    this->name = name;
    this->address = address;
    this->email = email;
}

void Person::showInfo()
{
    cout << "I am " << name << ", I'm " << age << " years old."
         << "\nI live in " << address << ". My email address is '"
         << email << "'.\nNice to meet you!\n";
    cout << endl;
}

void showInfo(Person *p, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        p[i].showInfo();
    }
}
int main()
{
    fstream f("input.txt");
    Person *person = new Person[10];
    string name;
    string address;
    string email;
    int age;
    size_t i = 0;
    while (!f.eof())
    {
        f >> age;
        f.ignore();
        getline(f, address);
        getline(f, name);
        getline(f, email);
        Person p(age, name, address, email);
        person[i] = p;
        i++;
    }

    showInfo(person, i);
    return 0;
}
