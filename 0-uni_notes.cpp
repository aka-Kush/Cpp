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

/***************WAP to calculate area and volume of a room using class and objet***************/

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

/***************WAP to access student info (UID, NAME, PERCENTAGE, GRADE) using class and objet***************/

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

/***************WAP to calculate average of marks of 5 subjects of a student***************/

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

/****************************************************************************************************************************************************
//Practical 2.2: 1. Create a class called employee with the following details as variables within it.(by defining member function outside the class)
//     1. Name of the employee (string)
//     2. Age (int)
//     3. Designation (string)
//     4. Salary (double)
****************************************************************************************************************************************************/
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

//function inside clas is inline by default
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

#include <iostream>
using namespace std;
void inline func1(char b[10])
{
    printf("%c\n", b[2]);
}
int main()
{
    func1("hello");
    return 0;
}

/*********************************************************************************************************************
WAP to input a matrix of dimension m*n. If base address is 1000. Find the address of (m-1, n-1) element of the matrix.
/********************************************************************************************************************/
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

/*********************************************************************************************************************
Write a program to illustrate the use of scope resolution operator. Display the various values of the same variables declared at different scope levels.
********************************************************************************************************************/
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
#include <iostream>
using namespace std;
class cube
{
public:
    int side;
    cube()
    {
        side = 10;
    }
};
int main()
{
    cube c;
    cout << c.side << endl;
    return 0;
}

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

/*************************************************************************************************************
Write a program to find the largest& smallest of three numbers. (Use inline function MAX and MIN)
**************************************************************************************************************/
#include <iostream>
using namespace std;
#define MAX(a, b, c) (a > b && a > c ? a : (b > c ? b : c))
#define MIN(a, b, c) (a < b && a < c ? a : (b < c ? b : c))
int main()
{
    cout << "NAME – VIPUL DHIMAN / UID - 20BCS5177" << endl;
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

//inheritance
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

/*********************************************/
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