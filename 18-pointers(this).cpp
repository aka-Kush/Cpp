/*
* "this" pointer is used when:
* 1) local variable’s name is same as member’s name
* 2) to return reference to the calling object
*/

//1.1)
#include <iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
private:
    int x;

public:
    void setX(int x)
    {
        // The 'this' pointer is used to retrieve the object's x
        // hidden by the local variable 'x'
        this->x = x;
    }
    void print() { cout << "x = " << x << endl; }
};

int main()
{
    Test obj;
    int x = 20;
    obj.setX(x);
    obj.print();
    return 0;
}

//1.2)
#include <iostream>
using namespace std;
class demo
{
private:
    int num;
    char ch;

public:
    void set_values(int num, char ch)
    {                    // '->' is known as member access operator
        this->num = num; //alternative: (*this).num = num;
        this->ch = ch;   //alternative: (*this).ch = ch;
    }
    void display_values()
    {
        cout << num << endl;
        cout << ch << endl;
    }
};
int main()
{
    demo obj;
    obj.set_values(100, 'A');
    obj.display_values();
    return 0;
}

//2)
#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    void show()
    {
        a = 10;
        b = 20;
        cout << "Object's address : " << this << endl;
        cout << "a = " << this->a << endl;
        cout << "b = " << this->b << endl;
    }
};

int main()
{
    test t;
    t.show();
    return 0;
}

//example of pointers
#include <iostream>
using namespace std;
class Box
{

public:
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    { // Constructor definition
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }

private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};
int main()
{
    Box Box1(3.3, 1.2, 1.5); // Declare box1
    Box Box2(8.5, 6.0, 2.0); // Declare box2
    Box *ptrBox;             // Declare pointer to a class.

    ptrBox = &Box1;                                         // Save the address of first object
    cout << "Volume of Box1: " << ptrBox->Volume() << endl; // Now try to access a member using member access operator

    ptrBox = &Box2;                                         // Save the address of second object
    cout << "Volume of Box2: " << ptrBox->Volume() << endl; // Now try to access a member using member access operator

    return 0;
}