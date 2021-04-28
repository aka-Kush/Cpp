//Compile time polymorphism -> early binding or static binding
//In Early Binding, compiler directly associate an address to the function call
//* 1) function overloading
#include <iostream>
using namespace std;
void abc() { cout << "Hello" << endl; };
void abc(int a) { cout << "a = " << a << endl; };
void abc(char b) { cout << "b = " << b << endl; };
int main()
{ //same function name but different arguments
    abc();
    abc(2);
    abc('b');
    //abc(2, 'a'); error, as there is no function that accepts 2 arguments
    return 0;
}

//function overload ambiguity -> When the compiler is unable to decide which function it should invoke first among the overloaded functions
//* 1.1) type-conversion
#include <iostream>
using namespace std;
void function(float x) { cout << "Value of x is " << x << endl; }
void function(int y) { cout << "Value of y is " << y << endl; }
int main()
{
    function(4);
    function(4.5); //ambiguity because by default C++ treats float as double which means it is an example of type-conversion
    return 0;
}

//correct way for above example
#include <iostream>
using namespace std;
void function(double x) { cout << "Value of x is " << x << endl; }
void function(int y) { cout << "Value of y is " << y << endl; }
int main()
{
    function(4);
    function(4.5); //ambiguity because by default C++ treats float as double which means it is an example of type-conversion
    return 0;
}

//* 2.1) Default arguments
#include <iostream>
using namespace std;
void function(int x) { cout << "x = " << x << endl; }
void function(int y, int z = 10)
{
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
int main()
{
    //function(10); error, it is ambiguous as both function can work with just one argument because second argument has already been initialized
    function(10, 20); //now second function will be invoked and value of z will be changed
    return 0;
}

//* 3.1) Function with pass by reference -> passing address instead of value
#include <iostream>
using namespace std;
// void function(int x);
// void function(int &);
void function(int x) { cout << "x = " << x << endl; }
void function(int &y) { cout << "y = " << y << endl; }
int main()
{ //ambiguous as logically both functions are same ; first accepts value, second accepts reference
    int a = 10;
    function(a);
    return 0;
}

//Problem Statement 1
//WAP to calculate cube of an integer and double variable using function overloading
#include <iostream>
using namespace std;
void cube(int x) { cout << "cube of " << x << " = " << x * x * x << endl; }
void cube(double y) { cout << "cube of " << y << " = " << y * y * y << endl; }
int main()
{
    cube(3);
    cube(3.5);
    return 0;
}

//Problem Statement 2
//WAP to calculate cube of an integer and float variable using function overloading -> hard coded
#include <iostream>
using namespace std;
void cube(float);
void cube(int);

void cube(float a) { cout << a * a * a << endl; }
void cube(int b) { cout << b * b * b << endl; }

int main()
{ //f is used to avoid ambiguity because of type-conversion
    cube(3);
    cube(3.5f); //using suffix f to tell compiler that it is a floating point value
    return 0;
}

//WAP to calculate cube of an integer and float variable using function overloading -> user input
#include <iostream>
using namespace std;
int cube(int num) { return num * num * num; }
float cube(float num) { return num * num * num; }
int main()
{
    int x;
    float y;
    cout << "Enter a number to find its cube = ";
    cin >> x;
    cout << "The cube of the number " << x << " is " << cube(x) << endl;

    cout << "Enter a number to find its cube = ";
    cin >> y;
    cout << "The cube of the number " << y << " is " << cube(y) << endl;
    return 0;
}

//WAP to calculate cube of an integer and float variable using function overloading and classes -> hierarichal inheritance
#include <iostream>
using namespace std;
class grandparent
{
public:
    int x;
    float y;

    int cube(int num) { return num * num * num; }
    float cube(float num) { return num * num * num; }
};
class parent1 : public grandparent
{
public:
    void get1()
    {
        cout << "Enter a number to find its cube = ";
        cin >> x;
    };
    void put1()
    {
        cout << "The cube of the number " << x << " is " << cube(x) << endl;
    };
};
class parent2 : public grandparent
{
public:
    void get2()
    {
        cout << "Enter a number to find its cube = ";
        cin >> y;
    };
    void put2()
    {
        cout << "The cube of the number " << y << " is " << cube(y) << endl;
    };
};
int main()
{
    parent1 child1;
    parent2 child2;
    child1.get1();
    child1.put1();
    child2.get2();
    child2.put2();
    return 0;
}