//* Constructors
// 1. Default => Name of constructor and class should be same ; don't mention data type ; we can't pass paramteres

// 2. Paramterized Constructor => Name of constructor and class should be same ; don't mention data type ; we can pass paramteres
#include <iostream>
using namespace std;
class cube
{
public:
    int side;
    cube(int x) //formal parameter
    {
        side = x;
    }
};
int main()
{
    cube c(10); //actual parameter
    cout << c.side << endl;
    return 0;
}

// 3. Copy Constructor => It is a member function that initializes an object using another object of the same class
//syntax => className(const className &old_obj)
#include <iostream>
using namespace std;
class point
{
private:
    int x, y;

public:
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    };

    int getX()
    {
        return x;
    };

    int getY()
    {
        return y;
    };
};
int main()
{
    point p1(10, 15);
    point p2 = p1; //alternative way => point p2(p1);
    //we can also implicitly write point p2; p2=p1;  => it is called Implicit Assignment
    cout << "p1.x is " << p1.getX() << "\np1.y is " << p1.getY() << endl;
    cout << "p2.x is " << p2.getX() << "\np2.y is " << p2.getY() << endl;
    return 0;
}

//copy constuctor -> alternative way ; user defined
#include <iostream>
using namespace std;
class point
{
private:
    int x, y;

public:
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    };
    point(const point &p1) //user defined copy constructor
    {
        x = p1.x;
        y = p1.y;
    };
    int getX()
    {
        return x;
    };
    int getY()
    {
        return y;
    };
};
int main()
{
    point p1(10, 15);
    //shallow copy
    point p2 = p1; //alternative way => point p2(p1);
    cout << "p1.x is " << p1.getX() << "\np1.y is " << p1.getY() << endl;
    cout << "p2.x is " << p2.getX() << "\np2.y is " << p2.getY() << endl;
    return 0;
}

//Construct Overloading => using same name construct but with different argument list
#include <iostream>
using namespace std;
class construct
{
public:
    float area;
    construct() //default
    {
        area = 10;
    };
    construct(float x, float y) //paramterized 1
    {
        area = x * y;
    };
    construct(float z) //paramterized 2
    {
        area = z;
    };
    void disp()
    {
        cout << area << endl;
    }
};
int main()
{
    construct o;
    construct o2(10.2, 20.5); //alternative way => construct 02 = construct (10.2, 20.5)
    construct o3(5);          //alternative way => construct 03=5;
    // cout << o.area << endl;
    // cout << o2.area << endl;
    // cout << o3.area << endl;
    o.disp();
    o2.disp();
    o3.disp();
    return 0;
}