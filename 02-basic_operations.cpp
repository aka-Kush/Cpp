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


