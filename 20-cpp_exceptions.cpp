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
