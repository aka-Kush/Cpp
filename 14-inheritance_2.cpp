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

//Problem Statement
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