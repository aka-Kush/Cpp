//First program
#include <iostream>
using namespace std;

int main()
{
    long first, second, sum;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    cout << first << " + " << second << " = " << first + second << endl;
    return 0;
}

//program to perform division
#include <iostream>
using namespace std;
//quotient = dividend/divisor
//remainder = dividend%divisor
int main()
{
    int quotient, dividend, divisor, remainder;
    cout << "Enter divisor and dividend: ";
    cin >> divisor >> dividend;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "remainder= " << remainder << endl;
    cout << "quotient= " << quotient << endl;
    return 0;
}

//program to swap two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << a << " & " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << a << " & " << b << endl;
    return 0;
}

//how to append/combine strings
#include <iostream>
using namespace std;
int main()
{
    string first_name = "Shivansh";
    string last_name = "Kush";
    // string full_name = first_name + " " + last_name;
    string full_name = first_name.append(last_name);
    cout << "My name is " << full_name << endl;
    return 0;
}

// creating your own namespace
#include <iostream>
using namespace std;
namespace my_namespace1
{
    int x = 5;
    void printx()
    {
        cout << x << endl;
    }
}
namespace my_namespace2
{
    int x = 10;
    void printx()
    {
        cout << x << endl;
    }
}
int main()
{
    // accessing namespace -> name_of_namespace::function_name/variable_name
    my_namespace1::printx();
    my_namespace2::printx();
    return 0;
}

//accessing variables using user-defined namespace
#include <iostream>
using namespace std;
namespace nspace
{
    int val = 500;
}
int main()
{
    int val = 200;
    cout << nspace::val << endl;
    cout << val << endl;
    return 0;
}

//calling function using namespace
#include <iostream>
using namespace std;
namespace hello1
{
    void sayhello()
    {
        cout << "hello1" << endl;
    }
}
namespace hello2
{
    void sayhello()
    {
        cout << "hello2" << endl;
    }
}
int main()
{
    hello1::sayhello();
    hello2::sayhello();
}

//nested namespace
#include <iostream>
using namespace std;
namespace hello1
{
    // void sayhello()
    // {
    // 	cout << "hello1" << endl;
    // }
    namespace hello2
    {
        void sayhello()
        {
            cout << "hello2" << endl;
        }
    }
}
int main()
{
    // hello2::sayhello(); //not declared
    hello1::hello2::sayhello();
}

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

//program to display name and id using class
#include <iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    void insert(int i, string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout << id << " " << name << endl;
    }
};
int main()
{
    student s1, s2;
    s1.insert(101, "Slim");
    s2.insert(102, "Shady");
    s1.display();
    s2.display();
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

//WAP to calculate area and volume of a room using class and object
#include <iostream>
using namespace std;
class volume
{
public:
    void find()
    {
        int length, width, height;
        cout << "Enter length, width & height : ";
        cin >> length >> width >> height;
        int volume = length * width * height;
        int area = length * width;
        cout << "Volume : " << volume << endl;
        cout << "Area : " << area << endl;
    }
};
int main()
{
    volume obj1;
    obj1.find();
    return 0;
}

//WAP to access student info (UID, NAME, PERCENTAGE, GRADE) using class and object
#include <iostream>
using namespace std;
class student
{
public:
    int uid;
    string name;
    int percentage;
    char grade;

    void insert(int i, string n, int p, char g)
    {
        uid = i;
        name = n;
        percentage = p;
        grade = g;
    }
    void display()
    {
        cout << "\nUID : " << uid << "\nName : " << name << "\nPercentage : " << percentage << "\nGrade : " << grade << endl;
    }
};
int main()
{
    student s1, s2;
    s1.insert(101, "Slim", 78, 'B');
    s2.insert(102, "Shady", 98, 'A');
    s1.display();
    s2.display();
}

//WAP to calculate average of marks of 5 subjects of a student
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cout << "Enter marks of five subjects : ";
    cin >> a >> b >> c >> d >> e;
    f = (a + b + c + d + e) / 5;
    cout << "Average of 5 subjects : " << f << endl;
    return 0;
}

#include <iostream>
using namespace std;
class abc
{
public:
    int age;
    void displayAge()
    {
        cout << "Enter your age: ";
        cin >> age;
        cout << "Age is " << age << endl;
    }
};
int main()
{
    abc obj;
    //cin >> obj.age;
    obj.displayAge();
    //return 0;
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

//fibonacci series - basic
#include <iostream>
using namespace std;
class fibonacci
{
public:
    void fib()
    {
        int n, first = 0, second = 1, next = 0;
        cout << "Enter length of Fibonacci series: ";
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            if (i == 1)
            {
                cout << first << ", ";
                continue;
            }
            if (i == 2)
            {
                cout << second << ", ";
                continue;
            }
            next = first + second;
            first = second;
            second = next;
            cout << next << ", ";
        }
    }
};
int main()
{
    fibonacci obj;
    obj.fib();
}

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

//Practical 2.2: 1. Create a class called employee with the following details as variables within it.(by defining member function outside the class)
//     1. Name of the employee (string)
//     2. Age (int)
//     3. Designation (string)
//     4. Salary (double)
#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int age;
    string designation;
    double salary;

    void insert();
    void display();
};
void employee::insert()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your Age: ";
    cin >> age;
    cout << "Enter your Designation: ";
    cin >> designation;
    cout << "Enter your Salary: ";
    cin >> salary;
}
void employee::display()
{
    cout << "\nName : " << name << "\nAge : " << age << "\nDesignation : " << designation << "\nSalary : " << salary << endl;
}
int main()
{
    int n;
    cout << "Enter total number of employees: ";
    cin >> n;
    employee e[n];
    for (int i = 0; i < n; i++)
        e[i].insert();
    for (int i = 0; i < n; i++)
        e[i].display();
}

//Practical 1.1: WAP to find average marks of five subjects of a student in a class.
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float sum, marks, avg;

    cout << "Enter total number of subjects: ";
    cin >> n;
    cout << "Enter marks of " << n << " subjects (seperated with space): ";
    for (i = 0; i < n; i++)
    {
        cin >> marks;
        sum += marks;
        //marks = 0;
    };

    cout << "Total marks = " << sum << endl;

    avg = float(sum / n);
    cout << "Average marks of " << n << " subjects are = " << avg << endl;
    return 0;
}

//Practical 1.2: WAP to swap first and last digits of any number. (For ex:-n=12345, Output:-52341)
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, first, last, sum, dig, num, x, y;

    cout << "Input your number: ";
    cin >> n;
    dig = (int)log10(n);
    first = n / pow(10, dig);
    last = n % 10;
    x = first * (pow(10, dig));
    y = n % x;
    n = y / 10;
    num = last * (pow(10, dig)) + (n * 10 + first);
    cout << "Number after swaping the last and first digit is: " << num << endl;
}

//Practical 1.3: WAP to generate the Fibonacci series up to user specified limit. Write all the missing terms (e.g. 4, 6, 7, 9, 10, 11, 12, 14, 15…) also at the end.
#include <iostream>
using namespace std;
int main()
{
    int n, first = 0, second = 1, next = 0;
    cout << "Enter length of Fibonacci series: ";
    cin >> n;
    int fib[n];
    cout << "Fibonacci series is: ";
    for (int i = 1; i <= n; i++)
    {
        fib[i] = first;
        cout << first << " , ";
        next = first + second;
        first = second;
        second = next;
    }

    cout << "\nMissing numbers are :" << endl;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = fib[i] + 1; j < fib[i + 1]; j++)
            cout << j << " , ";
    }
    return 0;
}

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

//WAP to input a matrix of dimension m*n. If base address is 1000. Find the address of (m-1, n-1) element of the matrix.
#include <iostream>
using namespace std;
int main()
{
    int b, i, j, w, h = 0, k = 0;
    int row, col;
    cout << "Enter number of rows and columns respectively: ";
    cin >> row >> col;
    int arr[row][col];
    cout << "Enter the no. of elements in array: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter the base address: ";
    cin >> b;
    cout << "enter the storage size of one element stored in array: ";
    cin >> w;
    i = row - 1;
    j = col - 1;
    cout << "address of A[i][j] is  " << b + w * (col * (i - h) + (j - k));
    return 0;
}

//Write a program to illustrate the use of scope resolution operator. Display the various values of the same variables declared at different scope levels.
#include <iostream>
using namespace std;
int var = 10;
int main()
{
    int var = 50;
    cout << "Value of global my_variable is " << ::var << endl;
    cout << "Value of local my_variable is " << var << endl;
    return 0;
}

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

//Write a program to find the largest& smallest of three numbers. (Use inline function MAX and MIN)
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

//WAP to take input of UID and marks of a student and display it using single level inheritance
//hard coded
#include <iostream>
using namespace std;
class student
{
public:
    int uid;
    void getNumber(int i) { uid = i; }
    int putNumber() { return uid; }
};
class test : public student
{
public:
    int marks;
    void getMarks(int m) { marks = m; }
    int putMarks() { return marks; }
};
int main()
{
    test s1;
    s1.getNumber(12);
    s1.putNumber();
    s1.getMarks(78);
    s1.putMarks();
    cout << "UID: " << s1.putNumber();
    cout << "\nMarks: " << s1.putMarks();
    return 0;
}

//user input
#include <iostream>
using namespace std;
class student
{
private:
    string uid;

public:
    void getNumber()
    {
        cout << "Enter marks: ";
        cin >> uid;
    }
    int putNumber()
    {
        cout << "UID is " << uid << endl;
    }
};
class test : public student
{
public:
    int marks;
    void getMarks()
    {
        cout << "Enter: ";
        cin >> marks;
    }
    int putMarks() { cout << "Marks is " << marks << endl; }
};
int main()
{
    test s1;
    s1.getNumber();
    s1.putNumber();
    s1.getMarks();
    s1.putMarks();
    return 0;
}

// Multilevel Inheritance
#include <iostream>
using namespace std;
class parent //single base class
{
public:
    int x;
    void get_x()
    {
        cout << "\nEnter value of x: ";
        cin >> x;
    };
};
class child_1 : public parent //first child/derived class
{
public:
    int y;
    void get_y()
    {
        cout << "\nEnter value of y: ";
        cin >> y;
    };
};
class child_2 : public child_1 //second child/derived class
{
private:
    int z;

public:
    void get_z()
    {
        cout << "\nEnter value of z: ";
        cin >> z;
    };
    void product()
    {
        cout << "\nProduct is " << x * y * z << endl;
    }
};
int main()
{
    child_2 obj;
    obj.get_x();
    obj.get_y();
    obj.get_z();
    obj.product();
    return 0;
}

// Multiple Inheritance
#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "WORLD" << endl; }
};
class B
{
public:
    B() { cout << "HELLO" << endl; }
};
class C : public B, public A // Note the order
{
public:
    C() { cout << "!!!" << endl; }
};
int main()
{
    C c;
    return 0;
}

//example
#include <iostream>
using namespace std;
class student
{
private:
    int uid;
    string name;

public:
    void getinfo()
    {
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your UID : ";
        cin >> uid;
    };
    void putinfo()
    {
        cout << "Name = " << name << endl;
        cout << "UID = " << uid << endl;
    };
};
class marks
{
protected:
    int m1, m2, m3;

public:
    void get_marks()
    {
        cout << "Enter marks for first subject : ";
        cin >> m1;
        cout << "Enter marks for second subject : ";
        cin >> m2;
        cout << "Enter marks for third subject : ";
        cin >> m3;
    };
};
class result : public student, public marks
{
public:
    int sum = m1 + m2 + m3;
    float average = sum / 3;
    void total()
    {
        cout << "Total marks = " << sum << endl;
        cout << "Average marks = " << average << endl;
    }
};
int main()
{
    result obj;
    obj.getinfo();
    obj.putinfo();
    obj.get_marks();
    obj.total();
    return 0;
}

//Hierarichal Inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int x, y;
    void getdata()
    {
        cout << "Enter value of X and Y : ";
        cin >> x >> y;
    };
};
class B : public A
{
public:
    void product()
    {
        cout << "Product is " << x * y << endl;
    };
};
class C : public A
{
public:
    void sum()
    {
        cout << "Sum is " << x + y << endl;
    };
};
int main()
{
    C c;
    B b;
    b.getdata();
    b.product();
    c.getdata();
    c.sum();
    return 0;
}

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

//LAB MST PROBLEM STATEMENT
//Create a class ITEM. Create function getdata() and putdata() to take user input of item number and price and printing it to screen
#include <iostream>
#include <iomanip>
using namespace std;
class ITEM
{
    int item_no;
    float price;

public:
    void getdata()
    {
        cout << "Enter item number : ";
        cin >> item_no;
        cout << "Enter the price of item number " << item_no << " : ";
        cin >> price;
    }
    void putdata()
    {
        cout << setw(6) << item_no << setw(15) << price << endl;
    }
};
int main()
{
    ITEM obj[5];
    int n;
    cout << "Shivansh Kush / 20BCS4505";
    cout << "\nEnter total number of items = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        obj[i].getdata();
    }
    cout << "ITEM Number" << setw(10) << "PRICE" << endl;
    for (int i = 0; i < n; i++)
    {
        obj[i].putdata();
    }
    return 0;
}

//Compile time polymorphism -> early binding or static binding
//In Early Binding, compiler directly associate an address to the function call
//* 1) function overloading
#include <iostream>
using namespace std;
void abc() { cout << "Hello" << endl; };
void abc(int a) { cout << "a = " << a << endl; };
void abc(char b) { cout << "b = " << b << endl; };
int main()
{ //same function name but different arguments
    abc();
    abc(2);
    abc('b');
    //abc(2, 'a'); error, as there is no function that accepts 2 arguments
    return 0;
}

//function overload ambiguity -> When the compiler is unable to decide which function it should invoke first among the overloaded functions
//* 1.1) type-conversion
#include <iostream>
using namespace std;
void function(float x) { cout << "Value of x is " << x << endl; }
void function(int y) { cout << "Value of y is " << y << endl; }
int main()
{
    function(4);
    function(4.5); //ambiguity because by default C++ treats float as double which means it is an example of type-conversion
    return 0;
}

//correct way for above example
#include <iostream>
using namespace std;
void function(double x) { cout << "Value of x is " << x << endl; }
void function(int y) { cout << "Value of y is " << y << endl; }
int main()
{
    function(4);
    function(4.5); //ambiguity because by default C++ treats float as double which means it is an example of type-conversion
    return 0;
}

//* 2.1) Default arguments
#include <iostream>
using namespace std;
void function(int x) { cout << "x = " << x << endl; }
void function(int y, int z = 10)
{
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
int main()
{
    //function(10); error, it is ambiguous as both function can work with just one argument because second argument has already been initialized
    function(10, 20); //now second function will be invoked and value of z will be changed
    return 0;
}

//* 3.1) Function with pass by reference -> passing address instead of value
#include <iostream>
using namespace std;
// void function(int x);
// void function(int &);
void function(int x) { cout << "x = " << x << endl; }
void function(int &y) { cout << "y = " << y << endl; }
int main()
{ //ambiguous as logically both functions are same ; first accepts value, second accepts reference
    int a = 10;
    function(a);
    return 0;
}

//WAP to calculate cube of an integer and double variable using function overloading
#include <iostream>
using namespace std;
void cube(int x) { cout << "cube of " << x << " = " << x * x * x << endl; }
void cube(double y) { cout << "cube of " << y << " = " << y * y * y << endl; }
int main()
{
    cube(3);
    cube(3.5);
    return 0;
}

//WAP to calculate cube of an integer and float variable using function overloading -> hard coded
#include <iostream>
using namespace std;
void cube(float);
void cube(int);

void cube(float a) { cout << a * a * a << endl; }
void cube(int b) { cout << b * b * b << endl; }

int main()
{ //f is used to avoid ambiguity because of type-conversion
    cube(3);
    cube(3.5f); //using suffix f to tell compiler that it is a floating point value
    return 0;
}

//WAP to calculate cube of an integer and float variable using function overloading -> user input
#include <iostream>
using namespace std;
int cube(int num) { return num * num * num; }
float cube(float num) { return num * num * num; }
int main()
{
    int x;
    float y;
    cout << "Enter a number to find its cube = ";
    cin >> x;
    cout << "The cube of the number " << x << " is " << cube(x) << endl;

    cout << "Enter a number to find its cube = ";
    cin >> y;
    cout << "The cube of the number " << y << " is " << cube(y) << endl;
    return 0;
}

//WAP to calculate cube of an integer and float variable using function overloading and classes -> hierarichal inheritance
#include <iostream>
using namespace std;
class grandparent
{
public:
    int x;
    float y;

    int cube(int num) { return num * num * num; }
    float cube(float num) { return num * num * num; }
};
class parent1 : public grandparent
{
public:
    void get1()
    {
        cout << "Enter a number to find its cube = ";
        cin >> x;
    };
    void put1()
    {
        cout << "The cube of the number " << x << " is " << cube(x) << endl;
    };
};
class parent2 : public grandparent
{
public:
    void get2()
    {
        cout << "Enter a number to find its cube = ";
        cin >> y;
    };
    void put2()
    {
        cout << "The cube of the number " << y << " is " << cube(y) << endl;
    };
};
int main()
{
    parent1 child1;
    parent2 child2;
    child1.get1();
    child1.put1();
    child2.get2();
    child2.put2();
    return 0;
}

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

/*
* "this" pointer is used when:
* 1) local variable’s name is same as member’s name
* 2) to return reference to the calling object
*/

//1.1)
#include <iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
private:
    int x;

public:
    void setX(int x)
    {
        // The 'this' pointer is used to retrieve the object's x
        // hidden by the local variable 'x'
        this->x = x;
    }
    void print() { cout << "x = " << x << endl; }
};

int main()
{
    Test obj;
    int x = 20;
    obj.setX(x);
    obj.print();
    return 0;
}

//1.2)
#include <iostream>
using namespace std;
class demo
{
private:
    int num;
    char ch;

public:
    void set_values(int num, char ch)
    {                    // '->' is known as member access operator
        this->num = num; //alternative: (*this).num = num;
        this->ch = ch;   //alternative: (*this).ch = ch;
    }
    void display_values()
    {
        cout << num << endl;
        cout << ch << endl;
    }
};
int main()
{
    demo obj;
    obj.set_values(100, 'A');
    obj.display_values();
    return 0;
}

//2)
#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    void show()
    {
        a = 10;
        b = 20;
        cout << "Object's address : " << this << endl;
        cout << "a = " << this->a << endl;
        cout << "b = " << this->b << endl;
    }
};

int main()
{
    test t;
    t.show();
    return 0;
}

//example of pointers
#include <iostream>
using namespace std;
class Box
{

public:
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    { // Constructor definition
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }

private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};
int main()
{
    Box Box1(3.3, 1.2, 1.5); // Declare box1
    Box Box2(8.5, 6.0, 2.0); // Declare box2
    Box *ptrBox;             // Declare pointer to a class.

    ptrBox = &Box1;                                         // Save the address of first object
    cout << "Volume of Box1: " << ptrBox->Volume() << endl; // Now try to access a member using member access operator

    ptrBox = &Box2;                                         // Save the address of second object
    cout << "Volume of Box2: " << ptrBox->Volume() << endl; // Now try to access a member using member access operator

    return 0;
}

//* Dynamic Memory Allocation
//Dynamically allocated memory is allocated on Heap and non-static and local variables get memory allocated on Stack
//new and delete operators perform the task of allocating and freeing the memory
#include <iostream>
using namespace std;
int main()
{
    int *ptr; //declaration
    float *ptr1;

    ptr = new int;
    ptr1 = new float; //initialization

    *ptr = 100;
    *ptr1 = 45.6;

    cout << "Address is : " << ptr << endl;
    cout << "Stored value : " << *ptr << endl;
    cout << "Address of ptr1 : " << ptr1 << endl;
    cout << "Stored value on ptr1 : " << *ptr1 << endl;

    delete ptr;
    delete ptr1;

    cout << *ptr << endl;
    cout << ptr << endl; //Address is not deleted

    ptr = nullptr;
    cout << ptr << endl;
}

/*
* C++ Exceptions
* Exception handling in C++ consist of three keywords: try, throw and catch:
* The 'try' statement allows you to define a block of code to be tested for errors while it is being executed.
* The 'throw' keyword throws an exception when a problem is detected, which lets us create a custom error.
* The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.
*/

//try-throw-catch (Exception Handler)
#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome!" << endl;

    try
    {
        throw 10;
        cout << "In try block" << endl;
    } /*Exception Thrown*/
    catch (int exp)
    {
        cout << "Exception encountered\n"
             << exp << endl;
    }
    /* or catch(int) {cout << "Exception Encountered" << endl;} */
    cout << "Program ends here" << endl;
    return 0;
}

//Example 1
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Welcome!" << endl;
    try
    {
        cout << "Enter the number: ";
        cin >> a;
        if (a == 2)
        {
            throw 2;
            cout << "In try block" << endl;
        }
    }
    catch (int exp)
    {
        cout << "Exception encountered\n"
             << exp << endl;
    }
    cout << "Program ends here" << endl;
    return 0;
}
//Example 2
#include <iostream>
using namespace std;
int main()
{
    int num, den, result, a = 1;
    try
    {
        cout << "Enter numerator = ";
        cin >> num;
        cout << "Enter denominator = ";
        cin >> den;
        if (den == 0)
        {
            throw a;
        }
        else
        {
            result = num / den;
            cout << "Result = " << result << endl;
        }
    }
    catch (int)
    {
        cout << "Exception occured due to division by 0" << endl;
    }
    cout << "Program has ended here" << endl;
}

//error cases
#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw 20; /*int type*/
        cout << "In try block" << endl;
    }
    cout << "Hello" << endl; /* error as there should always be a catch after try */
    catch (double /*error as throw was int type*/)
    {
        cout << "Exception encountered" << exp << endl;
    }
    cout << "Program ends here" << endl;
    return 0;
}

//all catch or default catch
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Welcome!" << endl;
    try
    {
        cout << "Enter the number: ";
        cin >> a;
        if (a == 1)
            throw 2;
        if (a == 2)
            throw "hello";
        if (a == 3)
            throw 'A';
    }
    catch (...) /*It will catch any type of thrown exception*/
    {
        cout << "Exception encountered" << endl;
    }
    cout << "-- Program ends here --" << endl;
    return 0;
}
