//* File Handling In C++

// Each file stream class contains a file pointer that is used to keep track of the current read/write position within the file.
// When something is read from or written to a file, the reading/writing happens at the file pointer’s current location.
// By default, when opening a file for reading or writing, the file pointer is set to the beginning of the file

//According to opening mode of file, file pointer can be categorized in two ways
//* get pointer
//* put pointer

//* get pointer
//The get pointer allows us to read the content of a file when we open the file in read-only mode.
//It automatically points at the beginning of file, allowing us to read the file from the beginning

//In order to perform a file input operation using the get pointer, C++ provides us a few file stream classes…
//* ifstream
//* fstream

//File mode to work with get pointer?
//ios::in = Searches for the file and opens it in read mode only and gives access to get pointer, to read the content of a file.

//Functions to work with the get pointer?
//* tellg()
// Gives us the current location of the get pointer. When the file is opened in a read-only mode, tellg() returns zero i.e. the beginning
// of the file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("Hello.txt", ios::out); // open file in read and write mode
    file << "Hello class";
    cout << "the current position of pointer is :" << file.tellg() << endl; // print the position of the pointer in file
    file.close();                                                           // close the open file
}

//create a file "test.txt" with some text in it before testing it
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream obj;
    obj.open("test.txt", ios::in);
    char ch;
    int pos;
    while (!obj.eof())
        obj >> ch;
    pos = obj.tellg();
    cout << pos << "." << ch << "\n";
    obj.close();
}

//* seekg()
// This function is used to set the location of the get pointer to a desired position/offset. The position variable is the new position in
// the file i.e. an integer value representing the number of bytes from the beginning of the file.
//Syntax: seekg (streampos position);

// ios::beg - offset from the beginning of the file.
// ios::cur - offset from the current position in the file.
// ios::end - offset from the end of the file.

//create a file "hello.txt" before testing it
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    fstream File("hello.txt", ios::in | ios::out);
    File << "Hello world";
    File.seekg(9, ios::beg);
    char F[9];
    File.read(F, 5);
    F[5] = 0;
    cout << F << endl;
    File.close();
}

//create a file "hello.txt" with some text in it before testing it
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream ifstream_ob; //Creating an input stream to read the content of a file

    ifstream_ob.open("hello.txt", ios::in); //Opening a file named country1.txt to read its content
    cout << "The first location in the file : " << ifstream_ob.tellg() << "\n";
    char ch;
    cout << "\nReading the content of file : \n";

    while (ifstream_ob) //Read the file until EOF is reached
        ch = ifstream_ob.get();
    cout << ch;

    ifstream_ob.clear(); //Setting the EOF flag off, to allow the access of file again for reading
    cout << "\n\nReading the content of file once again : \n";

    ifstream_ob.seekg(0, ios::beg); //Taking the get pointer at the zero byte location from the beginning of the file
    while (ifstream_ob)             //Reading the content of the file again
        ch = ifstream_ob.get();
    cout << ch;
    return 0;
}
