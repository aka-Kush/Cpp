//inline function
#include <iostream>
using namespace std;
inline void displayNum(int num)
{
    cout << num << endl;
}
int main()
{
    displayNum(5);
    displayNum(100);
    displayNum(5000);
    return 0;
}

//function inside class is inline by default
#include <iostream>
using namespace std;
class S
{
public:
    void square(int num)
    {
        cout << num * num << endl;
    }
};
int main()
{
    S obj;
    obj.square(2);
    return 0;
}

//function difinition outside class are not inline by default ; use keyword inline
#include <iostream>
using namespace std;
class S
{
public:
    void square(int num);
};
inline void S::square(int num)
{
    cout << num * num << endl;
}
int main()
{
    S obj;
    obj.square(2);
    return 0;
}

//program using inline function
#include <iostream>
using namespace std;
class operation
{
    int a, b, add, sub, mul;
    float div;

public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void operation::get()
{
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
};
inline void operation::sum()
{
    add = a + b;
    cout << a << " + " << b << " = " << add << endl;
};
inline void operation::difference()
{
    sub = a - b;
    cout << a << " - " << b << " = " << sub << endl;
};
inline void operation::product()
{
    mul = a * b;
    cout << a << " * " << b << " = " << mul << endl;
};
inline void operation::division()
{
    div = float(a / b);
    cout << a << " / " << b << " = " << div << endl;
};
int main()
{
    operation obj;
    obj.get();
    obj.sum();
    obj.difference();
    obj.product();
    obj.division();
    return 0;
}

//Problem Statement
//Write a program to find the largest & smallest of three numbers. (Use inline function MAX and MIN)
#include <iostream>
using namespace std;
#define MAX(a, b, c) (a > b && a > c ? a : (b > c ? b : c))
#define MIN(a, b, c) (a < b && a < c ? a : (b < c ? b : c))
int main()
{
    cout << "NAME – SHIVANSH KUSH / UID - 20BCS4505" << endl;
    int x, y, z, large, small;
    //printf("Enter 3 numbers: ");
    cout << "Enter 3 numbers: ";
    // scanf("%d%d%d", &x, &y, &z);
    cin >> x >> y >> z;
    large = MAX(x, y, z);
    small = MIN(x, y, z);
    //printf("\nMax between %d, %d, and %d is %d.", x, y, z, large);
    cout << "\nMax between " << x << " and " << y << " and " << z << " is " << large;
    //printf("\nMin between %d, %d, and %d is %d.", x, y, z, small);
    cout << "\nMin between " << x << " and " << y << " and " << z << " is " << small;
    return 0;
}