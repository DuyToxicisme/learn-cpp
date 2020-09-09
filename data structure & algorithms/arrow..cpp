#include <iostream>

using namespace std;

struct node{
    int data;
    node *pnext;
};

int main()
{
    node a;
    a.data = 4;
    cout<<a.data<<endl;
    node *b = new node;

    b -> data = 6;
    cout<<b -> data<<endl;
}