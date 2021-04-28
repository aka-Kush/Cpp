//* inheritance
/* syntax ->  class sub_class : access_mode base_class { code here } */
//sub_class can't access private data members of base class
#include <iostream>
using namespace std;
class base //base class / parent class / super class
{
public:
    int id_a;
};
class derived : public base //derived class
{
public:
    int id_b;
};
int main()
{
    derived obj1; //object declaration
    obj1.id_a = 10;
    obj1.id_b = 20;
    cout << "Derived id is " << obj1.id_b << "\nParent id is " << obj1.id_a << endl;
    return 0;
}
//inheritance example
#include <iostream>
using namespace std;
class parent
{
public:
    void getLength(int l)
    {
        length = l;
    };
    void getBreadth(int b)
    {
        breadth = b;
    };

protected: //child class can access protected data members
    int length, breadth;
};
class area : public parent //derived class
{
public:
    int getArea()
    {
        return length * breadth;
    }
};
int main()
{
    area obj1; //object declaration
    obj1.getLength(10);
    obj1.getBreadth(20);
    cout << "Area = " << obj1.getArea() << endl;
    return 0;
}

//Understanding Access of Child Class
#include <iostream>
using namespace std;
class parent_class
{
protected:
    int x;

public:
    int y;

private:
    int z;
};
class child_class : public parent_class
{
    /*
    * x is protected ; accessible 
    * y is public ; accessible
    * z is private ; not accessible
    */
};
class child_class : protected parent_class
{
    /*
    * x is protected ; accessible 
    * y is protected ; accessible
    * z is private ; not accessible
    */
};
class child_class : private parent_class
{
    /*
    * x is private ; not accessible
    * y is private ; not accessible
    * z is private ; not accessible
    */
};

//Accessing data members of Parent Class using Child Class -> "public" access mode
#include <iostream>
using namespace std;
class base
{
private:
    int pvt = 10;

public:
    int pub = 12;
    int getPvt() { return pvt; } //function to access private data member

protected:
    int prot = 14;
};
class Child : public base
{
public:
    int getProt() { return prot; }
};
int main()
{
    Child obj;
    cout << "Public: " << obj.pub << endl;
    cout << "Protected: " << obj.getProt() << endl;
    cout << "Private: " << obj.getPvt() << endl;
}

//Accessing data members of Parent Class using Child Class -> "protected" access mode
#include <iostream>
using namespace std;
class base
{
private:
    int pvt = 10;

public:
    int pub = 12;
    //int getPvt() { return pvt; } //function to access private data member

protected:
    int prot = 14;
    int getPub() { return pub; } //function to access private data member
    int getPvt() { return pvt; }
};
class Child : protected base
{
public:
    int getProt() { return prot; }
    int getPub() { return pub; } //function to access public data member
    int getPvt() { return pvt; }
};
int main()
{
    Child obj;
    cout << "Public: " << obj.getPub() << endl;
    cout << "Protected: " << obj.getProt() << endl;
    cout << "Private: " << obj.getPvt() << endl;
}