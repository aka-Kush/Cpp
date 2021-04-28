//* 2) Operator overloading
//* 2.1) Unary Operator
#include <iostream>
using namespace std;
class IncreDecre
{
private:
    int a, b;

public:
    void accept()
    {
        cout << "Enter two numbers : ";
        cin >> a >> b;
    };
    //syntax for operator loading
    void operator--() //overloading Unary Decrement
    {
        a--;
        b--;
    };
    void operator++() //overloading Unary Increment
    {

        a++;
        b++;
    };
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    };
};
int main()
{
    IncreDecre id;
    id.accept();
    --id;
    cout << "\nAfter Decrementing : ";
    id.display();
    ++id;
    ++id;
    cout << "\nAfter Incrementing : ";
    id.display();
    return 0;
}

//for prefix argument
#include <iostream>
using namespace std;
class count
{
private:
    int value;

public:
    count() { value = 10; } //default constructor
    void operator++() { ++value; }
    void operator--() { --value; }
    void display() { cout << "Count value is: " << value << endl; }
};
int main()
{
    count obj;
    ++obj;         //calling operator function
    obj.display(); //calling member function
    --obj;
    obj.display();
    return 0;
}

//for postfix argument
//syntax -> void operator operator_symbol (int) ; here int is a dummy argument
#include <iostream>
using namespace std;
class count
{
private:
    int value;

public:
    count() { value = 10; } //default constructor
    void operator++(int) { ++value; }
    void operator--(int) { --value; }
    void display() { cout << "Count value is: " << value << endl; }
};
int main()
{
    count obj;
    obj++;         //calling operator function
    obj.display(); //calling member function
    obj--;
    obj.display();
    return 0;
}

//example : generating a complex equation using operator overloading
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b, i;

public:
    void getvalue()
    {
        cout << "Enter two numbers : ";
        cin >> a >> b;
    }
    void operator++()
    {
        a = ++a;
        b = ++b;
    }
    void operator--()
    {
        a = --a;
        b = --b;
    }
    void display() { cout << a << "+\t" << b << 'i' << endl; }
};
int main()
{
    complex obj;
    obj.getvalue();
    ++obj;         //calling operator function
    obj.display(); //calling member function
    --obj;
    obj.display();
    return 0;
}

//* 2.2 Binary Operator
#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    A() //default constructor
    {

    };
    A(int i) //paramterized constructor
    {
        x = i;
    };
    //binary operator overloading accepts object as argument
    void operator+(A); //Declaration of operator overloading function
};
//syntax -> return_type class_name :: operator + (object_name)
void A ::operator+(A a) //definition of operator overloading function
{
    int m = x + a.x; //7+10
    cout << "Addition of a and b = " << m << endl;
};
int main()
{
    A a(7);
    A b(10);
    a + b; //calling the function
    return 0;
}

//example of Binary Operator overloading
#include <iostream>
using namespace std;
class Distance
{
public:
    int feet, inch;
    Distance()
    {
        feet = 0;
        inch = 0;
    };
    Distance(int f, int i)
    {
        feet = f; //8
        inch = i; //9
    };
    Distance operator+(Distance d2)
    {
        Distance d3;
        d3.feet = feet + d2.feet;
        d3.inch = inch + d2.inch;
        return d3;
    };
};
int main()
{
    Distance d1(8, 9);
    Distance d2(10, 2);
    Distance d3;
    d3 = d1 + d2;
    cout << "\nTotal feet and inches = " << d3.feet << "'" << d3.inch << endl;
    return 0;
}

//performing complex calculation using binary operator overloading
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void getvalue()
    {
        cout << "Enter the value of Complex numbers a and b : ";
        cin >> a >> b;
    };
    complex operator+(complex obj)
    {
        complex t;
        t.a = a + obj.a;
        t.b = b + obj.b;
        return (t);
    };
    complex operator-(complex obj)
    {
        complex t;
        t.a = a - obj.a;
        t.b = b - obj.b;
        return (t);
    };
    void display()
    {
        cout << a << " + " << b << "i" << endl;
    };
};
int main()
{
    complex obj1, obj2, result, result1;
    obj1.getvalue();
    obj2.getvalue();
    result = obj1 + obj2;
    result1 = obj1 - obj2;
    cout << "Input values : " << endl;
    obj1.display();
    obj2.display();
    cout << "Result : " << endl;
    result.display();
    result1.display();
    return 0;
}

//* 2.3 Binary operator overloading using friend function
#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    void get_a()
    {
        cout << "Enter value of a: ";
        cin >> a;
    };
    friend void operator>(A, B); //declaring friend operator function
};
class B
{
private:
    int b;

public:
    void get_b()
    {
        cout << "Enter value of b: ";
        cin >> b;
    };
    friend void operator>(A, B);
};
void operator>(A obj1, B obj2)
{
    obj1.a > obj2.b ? cout << "\na is greater number" << endl : cout << "\nb is greater number" << endl;
};
int main()
{
    A obj1;
    B obj2;
    obj1.get_a();
    obj2.get_b();
    obj1 > obj2;
    return 0;
}

//Binary operator overloading using friend function -> using 2 objects of same class
#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void get_a()
    {
        cout << "Enter value of a: ";
        cin >> a;
    };
    void get_b()
    {
        cout << "Enter value of b: ";
        cin >> b;
    };
    friend void operator>(A obj1, A obj2);
};
void operator>(A obj1, A obj2)
{
    obj1.a > obj2.b ? cout << "\na is greater number" << endl : cout << "\nb is greater number" << endl;
};
int main()
{
    A obj1, obj2;
    obj1.get_a();
    obj2.get_b();
    obj1 > obj2;
    return 0;
}

//example
#include <iostream>
using namespace std;
class Distance
{
public:
    int feet, inch; //Member Object
    Distance()      //No Parameter Constructor
    {
        feet = 0;
        inch = 0;
    }

    //Constructor to initialize the object's value
    Distance(int f, int i) //Parametrized Constructor
    {
        feet = f;
        inch = i;
    }
    friend Distance operator+(Distance &, Distance &); //Declaring friend function using friend keyword
};
Distance operator+(Distance &d1, Distance &d2) //Implementing friend function with two parameters
{
    Distance d3;                 //Create an object to return
    d3.feet = d1.feet + d2.feet; //Perform addition of feet and inches
    d3.inch = d1.inch + d2.inch;
    return d3; //Return the resulting object
}
int main()
{
    Distance d1(8, 9);                                              //Declaring and Initializing first object
    Distance d2(10, 2);                                             //Declaring and Initializing second object
    Distance d3;                                                    //Declaring third object
    d3 = d1 + d2;                                                   //Use overloaded operator
    cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch; //Display the result
    return 0;
}