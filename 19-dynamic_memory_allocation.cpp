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

//elements after deletion from heap
#include <iostream>
using namespace std;
int main()
{
    int *p = new int[6];
    for (int i = 0; i < 6; i++)
    {
        p[i] = i + 1;
    }
    cout << "\nELEMENTS AT THE BIGNING OF THE PROGRAM : ";
    for (int i = 0; i < 6; i++)
    {
        cout << p[i] << ' ';
    }
    delete[] p;
    cout << "\nAFTER DELETION FROM THE HEAP : ";
    for (int i = 0; i < 6; i++)
    {
        cout << p[i] << ' ';
    }
    cout << endl;
    return 0;
}

//DMA in classes (objects)
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Constructor called :" << endl;
    }
    ~A()
    {
        cout << "Destructor called : " << endl;
    }
};
int main()
{
    A *a = new A[4];
    delete[] a;
    return 0;
}

//Problem statement 1
//WAP using DMA to get and display students GPA
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter no. of students : ";
    cin >> num;
    float *ptr;
    ptr = new float[num];
    cout << "Enter GPA of students  : " << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student data " << i + 1 << " : " << endl;
        cin >> *(ptr + i);
    }
    cout << "\nDisplaying Data : " << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student data " << i + 1 << " : " << *(ptr + i) << endl;
    }
    delete[] ptr;
    return 0;
}

//Problem statement 2
//WAP to find largest elements of an integer array, using DMA (new operator)
#include <iostream>
using namespace std;
int main()
{
    int total, num;
    cout << "Enter the total number of elements in array: ";
    cin >> total;

    int *arr = new int(total);
    for (int i = 0; i < total; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> arr[i];
    }
    for (int i = 1; i < total; i++)
    {
        if (num < arr[i])
        {
            num = arr[i];
        }
    }
    cout << "\nLargest number = " << num << endl;
    delete[] arr;
    return 0;
}

//Problem statement 3
//WAP to handle student data i.e UID,NAME, GPA using class and create objects array dynamically
#include <iostream>
using namespace std;
class student
{
public:
    string name;
    string uid;
    float gpa;
    void get_data()
    {
        cout << "----------------------" << endl;
        cout << "Enter name = ";
        cin >> name;
        cout << "Enter UID = ";
        cin >> uid;
        cout << "Enter gpa = ";
        cin >> gpa;
        cout << "----------------------" << endl;
    };
    void put_data()
    {
        cout << "----------------------" << endl;
        cout << "NAME = " << name << endl;
        cout << "UID = " << uid << endl;
        cout << "GPA = " << gpa << endl;
        cout << "----------------------" << endl;
    };
};
int main()
{
    int num;
    cout << "Enter total number of students = ";
    cin >> num;
    student *obj = new student[num];
    for (int i = 0; i < num; i++)
    {
        obj[i].get_data();
    }
    cout << "\nDETAILS: " << endl;
    for (int i = 0; i < num; i++)
    {
        obj[i].put_data();
    }
    delete[] obj;
    return 0;
}