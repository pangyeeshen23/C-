#include <iostream>
using namespace std;

void inVariable();
void inArray();
void inLoopArray();
void inArrayWithPointerNotation();

int main()
{
    inVariable();
    inArray();
    inLoopArray();
    inArrayWithPointerNotation();
    return 0;
}

void inVariable() {
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

void inArray() {
    int* ptr;
    int arr[5]{ 10, 46, 255, 520, 645};

    ptr = arr;
    cout << ptr << endl;
    cout << arr << endl;

    cout << ptr + 1 << endl; // this is the equivalend to &arr[1];
    cout << ptr + 2 << endl; // this is the equivalend to &arr[2];
    cout << ptr + 3 << endl; // this is the equivalend to &arr[3];
    cout << ptr + 4 << endl; // this is the equivalend to &arr[4];


    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + 4) << endl;
}

void inLoopArray() {
    float arr[3];
    float* ptr = arr;

    cout << "Displaying address using arrays: " << endl;

    // address of the each element in the arrayc
    for (int i = 0; i < 3; i++) {
        cout << "&arr[" << i << "] :" << &arr[i] << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "ptr[" << i << "] :" << ptr + i << endl;
    }
}

void inArrayWithPointerNotation() {
    float arr[5]{};

    cout << "Enter 5 numbers for the array" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> *(arr + i);
    }

    cout << "Displaying 5 numbers that had been stored in the array" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(arr + i) << endl;
    }
}

