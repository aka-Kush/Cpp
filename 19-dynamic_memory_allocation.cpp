//* Dynamic Memory Allocation
//Dynamically allocated memory is allocated on Heap and non-static and local variables get memory allocated on Stack
//new and delete operators perform the task of allocating and freeing the memory
#include <iostream>
using namespace std;
int main()
{
    int *ptr; //declaration
    float *ptr1;

    ptr = new int;
    ptr1 = new float; //initialization

    *ptr = 100;
    *ptr1 = 45.6;

    cout << "Address is : " << ptr << endl;
    cout << "Stored value : " << *ptr << endl;
    cout << "Address of ptr1 : " << ptr1 << endl;
    cout << "Stored value on ptr1 : " << *ptr1 << endl;

    delete ptr;
    delete ptr1;

    cout << *ptr << endl;
    cout << ptr << endl; //Address is not deleted

    ptr = nullptr;
    cout << ptr << endl;
}