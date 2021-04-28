//* Destructors
//Destructor is a member function which destructs or deletes an object ; it is automatically invoked by compiler when objects are destroyed
//it is not static or const ; it doesn't have args ; no return type, not even void ; should be declared publically
//syntax => ~constructor-name();
#include <iostream>
using namespace std;
class HelloWorld
{
public:
    HelloWorld()
    {
        cout << "Constructor is called" << endl;
    };
    ~HelloWorld()
    {
        cout << "Destructor is called" << endl;
    };
    void display()
    {
        cout << "Hello World!" << endl;
    }
};
int main()
{
    HelloWorld obj;
    obj.display(); //first constructor will be called then display function then destructo
    return 0;
}