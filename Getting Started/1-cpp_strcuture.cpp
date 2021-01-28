/* Comments */

// Comments are used to add meaning to what program is doing. It can be any note or annotation that is only human readable as it never make it to the compiler
// Single line Comments can be added by two forward slashes (//)
// Multiple line comments can be added like this:  ( /* Your comment */ )

/* Preprossesor */

// C++ preprocessor is a program that processes your source code before the compiler sees it
// It first strip's all the comments from the source file and replaces each comment with a single space,
// then it looks for preprocessor directives and it executes them

/* Preprocessor Directives */

// Preprocessor directives are typically used to make source programs easy to change and easy to compile in
// different execution environments. Directives in the source file tell the preprocessor to take specific
// actions.
// Preprocessor Directives are lines in source code that starts with pound/hash symbol (#)
// for ex. #include #if #else #elif etc.
// When the preprocessor sees this directive (say #include), it removes #include line with the file tat it is actually referring to and then processes that file as well
// So by the time compiler sees the source code, all comments are stripped out and all directives are processed and removed

/* Main Function */

// Every file must contain one and only one main function (function is the name given to a block of code)
// the name "main" must be lowercase
// When c++ program executes main function is called by the operating system and every thing inside curly braces ({}) gets executed
// When execution hits the return statment it returns an integer value, if the integer value is 0 then program ran successfully
// but if the integer returned is not 0 then operating system can check the value returned and check what went wrong

/* Namespaces */

// As C++ library (pre and user) is huge, therefore developer run out off name and names of a function maybe same which is called Naming Conflicts
// Namespaces are containers to group code entitities into a namespace scope
// Now if a person want to use cout stream which maybe defined in two libraries, he can mention which namespace to use for that code
// For ex. for using standard (std) c++ namespace one can use ( std::cout )
// Namesapces are used to reduce naming conflicts
// Double colon is called a scope resolution operator. It is used to resolve which name we want to use

// Now typing std::cout again and again can be tiring therfore if we are only using one namespace (in our case std) we can mention it at the start
// For ex.
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World" << endl;
    return 0;
}

// Other way of using namespace can be exlusively telling which name to use from which namespace specifically
// This methode is preferred over other as it will only use specific name mantioned
#include <iostream>
using std::cout;
using std::endl;
int main()
{
    cout << "Hello World" << endl;
    return 0;
}

/* Baic I/O using cout, cin, <<, >>, cerr, clog */

// cout
// standard output stream
// console

// cin
// standard input stream
// keyboard

// <<
// insertion operator
// insert data into cout stream ( cout << data )
// can also be chained ( cout << "data" << data )
// it does not automatically adds line brakes
// while inputing white space is ignored i.e. we user inputs spacebars and then 123 then only 123 will be considered as input

// >>
// extraction operator
// extract data from cin stream and stores data inside the variable to the RHS  ( cin >> variable )
// can also be chained  ( cin >> variable1 >> variable2 )

// endl
// endl is used to endline and bring cursor to the starting of next line
// \n is also used to enter a new line but it doesn't clear buffer as endl ( "hello \n world" )

// if we are inputting two integer and user inputs both integer in the first input statement then compiler won't wait for hitting enter in the second statement, it will directly print
// for ex.
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;
    return 0;
}
// now if user enters both values in first input, output will be like this:
// Enter first number: 12 13
// Enter second integer: You entered 12 and 13
// you can also do something like:
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout << "Enter two integers seperated with a space: ";
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;
    return 0;
}

// input double (decimal value)
#include <iostream>
using namespace std;
int main()
{
    double num;
    cout << "Enter decimal value: ";
    cin >> num;
    cout << "You entered " << num << endl;
    return 0;
}

// if we enter a double in integer it will take integer part as int and rest would be stored in double and it won't wait for us to press enter as it already has both values
#include <iostream>
using namespace std;
int main()
{
    int num1;
    double num2;
    cout << "Enter integer value: ";
    cin >> num1;
    cout << "Enter double value: ";
    cin >> num2;
    cout << "Integer is " << num1 << endl;
    cout << "Double is " << num2 << endl;
    return 0;
}
// now if we enter 10.5 output will be:
// Enter integer value: 10.5
//Enter double value: Integer is 10
// Double is 0.5