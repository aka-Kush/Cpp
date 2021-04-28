//function definition outside class - 1
#include <iostream>
using namespace std;
class abc
{
private:
    int val;

public:
    void add(int a, int b);
};
void abc::add(int a, int b)
{
    cout << a + b << endl;
};
int main()
{
    abc obj;
    obj.add(1, 2);
}

//function definition outside class - 2
#include <iostream>
using namespace std;
class abc
{
private:
    int val;

public:
    void input_val(int v);
    void print_val();
};
void abc::input_val(int v)
{
    val = v;
};
void abc::print_val()
{
    cout << "Value is " << val << endl;
};
int main()
{
    abc obj;
    obj.input_val(3);
    obj.print_val();
}

//using same name for class and object
#include <iostream>
using namespace std;
class abc
{
private:
    int x, y;

public:
    void input_abc(int, int);
    int area()
    {
        return (x * y);
    };
};
void abc::input_abc(int a, int b)
{
    x = a;
    y = b;
};

int main()
{
    abc abc;
    abc.input_abc(3, 4);
    cout << abc.area();
}