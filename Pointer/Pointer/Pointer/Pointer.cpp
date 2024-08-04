#include <iostream>
using namespace std;

void variable();
int main()
{
    variable();
    return 0;
}

void variable() {
    int n = 5;
    cout << n << endl;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v=" << v << endl;
}

