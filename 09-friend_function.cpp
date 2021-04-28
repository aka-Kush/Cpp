//friend function ; accessing private data member
#include <iostream>
using namespace std;
class myClass
{
private:
    int salary = 1000;
    string name = "John";

public:
    friend void myFriend(myClass friend1); //if we pass instance of class to friend function, copy of class will be sent to friend function
};
void myFriend(myClass friend1)
{
    cout << "Name = " << friend1.name << endl;
    cout << "Salary = " << friend1.salary << endl;
}
int main()
{
    myClass friend1;
    myFriend(friend1); //in order to access private data members we need to pass instance of class as an argument to friend function
    return 0;
}

//common friend function accessing private data of two classes
#include <iostream>
using namespace std;
class A; //forward declaration ; becuase it will be passed as argument in friend function
class B
{
private:
    int b;

public:
    void getVal(int x)
    {
        b = x;
    };
    void putVal()
    {
        cout << "Value of b is = " << b << endl;
    };
    friend void add(A obj1, B obj2); //to make friend function as member of both classes, pass class as argument
};
class A
{
private:
    int a;

public:
    void getVal(int x)
    {
        a = x;
    };
    void putVal()
    {
        cout << "Value of a is = " << a << endl;
    };
    friend void add(A obj1, B obj2);
};
void add(A obj1, B obj2)
{
    cout << obj1.a << " + " << obj2.b << " = " << obj1.a + obj2.b << endl;
};
int main()
{
    A obj1;
    B obj2;
    obj1.getVal(2);
    obj2.getVal(3);
    obj1.putVal();
    obj2.putVal();
    add(obj1, obj2);
    return 0;
}