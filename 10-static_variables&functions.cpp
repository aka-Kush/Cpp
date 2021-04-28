//static keyword - counter function
#include <iostream>
using namespace std;
void counter()
{
    static int count = 0;
    cout << count++ << endl;
}
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        counter();
    }
}

//static vbariable should be declared inside class and defined outside class in global scope
#include <iostream>
using namespace std;
class xyz
{
public:
    static int var; //declaration of static data member
};
int xyz::var = 5; //definition of static data member

int main()
{
    xyz obj1;
    cout << "Value of var is " << xyz::var << endl;
    cout << "Value of var is " << obj1.var << endl; //value of static variables are shared with instances of class
    return 0;
}

//accessing static data members through class and object
#include <iostream>
using namespace std;
class Demo
{
private:
    static int X;
    static int Y;

public:
    static void Print()
    {
        cout << "Value of X: " << X << endl;
        cout << "Value of Y: " << Y << endl;
    }
};
int Demo::X = 10;
int Demo::Y = 20;
int main()
{
    Demo obj;
    cout << "Printing through object name:" << endl;
    obj.Print();
    cout << "Printing through class name:" << endl;
    Demo::Print();
    return 0;
}