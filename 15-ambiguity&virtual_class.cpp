//Hybrid Inheritance   -> Combination of Hierarichal and Multiple Inheritance
/* 
* The problem with Hybrid Inheritance is it will throw an error in the below example as:
* D is inherited from B and C which are further inhertied from parent class A, therefore D gets 2 copies of A which causes ambiguity 
* To get rid of this problem we will use virtual base class A, using it B and C will not have different copies of A and further D will also have only 1 copy of A
*/

//Example causing Ambiguity
#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void get_a()
    {
        cout << "Enter value of a = ";
        cin >> a;
    }
};
class B : public A
{
protected:
    int b;

public:
    void get_b()
    {
        cout << "Enter value of b = ";
        cin >> b;
    };
};
class C : public A
{
protected:
    int c;

public:
    void get_c()
    {
        cout << "Enter value of c = ";
        cin >> c;
    };
};
class D : public B, public C
{
protected:
    int d;

public:
    void mul()
    {
        get_a();
        get_b();
        get_c();
        cout << "Product = " << a * b * c << endl;
    }
};
int main()
{
    D d;
    d.mul();
    return 0;
}

//Example of virtual base class => no Ambiguity
#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void get_a()
    {
        cout << "Enter value of a = ";
        cin >> a;
    }
};
class B : public virtual A
{
protected:
    int b;

public:
    void get_b()
    {
        cout << "Enter value of b = ";
        cin >> b;
    };
};
class C : virtual public A
{
protected:
    int c;

public:
    void get_c()
    {
        cout << "Enter value of c = ";
        cin >> c;
    };
};
class D : public B, public C
{
protected:
    int d;

public:
    void mul()
    {
        get_a();
        get_b();
        get_c();
        cout << "Product = " << a * b * c << endl;
    }
};
int main()
{
    D d;
    d.mul();
    return 0;
}