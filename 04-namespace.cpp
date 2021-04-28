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