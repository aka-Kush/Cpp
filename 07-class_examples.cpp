//WAP to input age and display it using class
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

//WAP to display name and id using class
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

//Problem Statement 1 
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

//Problem Statement 2
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

//Problem Statement 3
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
