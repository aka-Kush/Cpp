//class
#include <iostream>
using namespace std;
class abc //class declaration
{
public:
    string name;
    void printname()
    {
        cout << "Hi! My Name is " << name;
    }
};
int main()
{
    abc obj1; //declaration of an object ; class name followed by object name
    obj1.name = "Slim Shady";
    obj1.printname();
    return 0;
}

//annonymous class
#include <iostream>
using namespace std;
class
{
    int i; //by default private data member

public:
    void setdata()
    {
        int a;
        cout << "Enter value of a : ";
        cin >> a;
    }
    void printdata()
    {
        int a;
        cout << "Value of a : " << a << endl;
    }
} obj1; //declaration of object for annonymous functions
int main()
{
    obj1.setdata();
    obj1.printdata();
    return 0;
}

//private data member error
#include <iostream>
using namespace std;
class test
{
    int x;
};
int main()
{
    test t;
    cout << t.x; //error as it is private by default
}

//private data member error - example
#include <iostream>
using namespace std;
class abc
{
private:
    int age;

public:
    void displayAge()
    {
        cout << "Age is " << age << endl;
    }
};
int main()
{
    abc obj;
    cout << "Enter your age: ";
    cin >> obj.age; //error as age is private
    obj.displayAge();
    return 0;
}

//way to access private data member
#include <iostream>
using namespace std;
class abc
{
private:
    int age;

public:
    void displayAge(int a)
    {
        age = a; //accessing private data member
        cout << "Age is " << age << endl;
    }
};
int main()
{
    abc obj;
    obj.displayAge(50);
    return 0;
}