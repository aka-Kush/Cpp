//* put pointer
//It allows us to write the content to a file, when we openthe file in write-only mode. i.e. ios::out.
//It automatically points at the beginning of a file, starting us to write the content of a file from the start.

//File Output Stream Classes
//* ofstream
//* fstream

//File modes to work with put pointer
//* ios::out
//* ios::binary
//* ios::ate
//* ios::app
//etc...

//Functions to work with the put pointer
//* tellp()
//Gives us the current location of the put pointer. When the file is
//opened in a write-only mode, tellg() returns zero i.e. the
//beginning of the file

//create a file "hello.txt" before testing it
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("hello.txt", ios::out); // open file in read and write mode
    cout << file.tellp() << endl;
    file << "Example of tellp";
    cout << "the current position of pointer is :" << file.tellp() << endl; // print the position of the pointer in file
    file << "Random Access" << endl;
    cout << file.tellp() << endl;
    file.close(); // close the open file
}

//* seekp()
// This function is used to set the location of the put pointer to a
// desired position/offset. The position parameter is the new
// position in the file i.e. an integer value representing the number
// of bytes from the beginning of the file
//Syntax: seekp (streampos position);

//create a file "hello.txt" before testing it
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream obj;
    obj.open("hello.txt", ios::out);
    obj << "Hello World";
    int pos = 6;
    obj.seekp(pos - 1);
    obj << "...And here the text changed";
    obj.close();
    return 0;
}
//output : Hello...And here the text changed

//create a file "hello.txt" before testing it
#include <iostream>
#include <fstream>
int main()
{
    std::ofstream outfile;
    outfile.open("hello.txt");
    outfile.write("This is an apple", 16);
    long pos = outfile.tellp();
    outfile.seekp(pos - 7);
    outfile.write(" sai", 4);
    outfile.close();
    return 0;
}
//output : This is a saiple

//example - how to create and write to file using ofstream
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char arr[100];
    cout << "Writing to file..." << endl;
    cout << "\nEnter your name and location : ";
    cin.getline(arr, 100);        //getline() is a standard library function that is used to read a string or a line from an input stream
    ofstream myfile("hello.txt"); //myfile("file_name", mode)
    myfile << arr;
    myfile.close(); //The close() function is used to close the file currently associated with the object
    cout << "\nSuccessfully written to file!" << endl;
    return 0;
}

//example - how to create, write and read from a file using ifstream & ofstream
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char arr[100];
    char arr2[100];
    cout << "\nWriting to file..." << endl;
    cout << "Enter your name and location : ";
    cin.getline(arr, 100);
    ofstream myfile("hello.txt"); //creating file
    myfile << arr;                //writing to file
    myfile.close();               //closing the file
    cout << "Successfully written to file!" << endl;

    cout << "\nReading from file..." << endl;
    ifstream obj("hello.txt"); //reading from file
    obj.getline(arr2, 100);
    cout << "Array content is : " << arr2 << endl;
    cout << "Operation successfully completed!" << endl;
}

//example - how to append data to a existing file instead of destroying previous data
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char arr[100];
    cout << "\nWriting to file..." << endl;
    cout << "Enter your name and location : ";
    cin.getline(arr, 100);
    ofstream myfile("hello.txt", ios::app); //	(append) Set the stream's position indicator to the end of the stream before each output operation
    myfile << arr;
    myfile.close();
    cout << "Successfully written to file!" << endl;
    return 0;
}

//example program of tellg(),tellp(),seekg(),skeep()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream F;
    F.open("hello.txt", ios::in | ios::out); //opening a file in input and output mode
    cout << F.tellg() << endl;               //getting current location
    F.seekg(8, ios::beg);                    //seeing 8 bytes/characters
    cout << F.tellg() << endl;               //now, getting the current location
    char c = F.get();                        //extracting one character from current location
    cout << c << endl;                       //printing the character
    cout << F.tellg() << endl;               //after getting the character, getting current location
    F.seekg(10, ios::cur);                   //now, seeking 10 more bytes/characters
    cout << F.tellg() << endl;               //now, getting current location
    c = F.get();                             //again, extracing the one character from current location
    cout << c << endl;                       //printing the character
    cout << F.tellg() << endl;               //after getting the character, getting current location
    F.seekp(7, ios::beg);                    //again, seeking 7 bytes/characters from beginning
    F.put('Z');                              //writting a character 'Z' at current location
    F.seekg(-7, ios::end);                   //now, seeking back 7 bytes/characters from the end
    cout << "End:" << F.tellg() << endl;     //now, printing the current location
    c = F.get();                             //extracting one character from current location
    cout << c << endl;                       //printing the character
    F.close();                               //closing the file
    return 0;
}

//WAP to copy the contents of one file to another and display it on output screen.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string original, copy, text;
    cout << "Enter a name for original file: ";
    cin >> original;
    cout << "What would you like to write to " << original << " :" << endl;
    cin.ignore();
    getline(cin, text);
    cout << "\nWriting to " << original << endl;
    ofstream original_file(original);
    original_file << text;
    cout << "Successfully written to " << original << endl;
    cout << "\nEnter a name for second file: ";
    cin >> copy;
    ofstream copy_file(copy);
    copy_file << text << endl;
    cout << "Successfully written to " << copy << endl;
    cout << "\nHere is the content of " << copy << " :" << endl;
    cout << text << endl;
    original_file.close();
    copy_file.close();
    return 0;
}

/*WAP to read the class object of student info such as name, age and roll no from thekeyboard and to store them on a specified file using read() and write() 
functions. Again the same file is opened for reading and displaying the contents of the file on the screen*/
#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    void get()
    {
        cout << "\nEnter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
    void put()
    {
        cout << "\nName: " << name << "\nAge: " << age << endl;
    }
};
int main()
{
    student obj;
    ofstream file;
    file.open("test.txt", ios::out);
    if (!file)
        cout << "Error in creating file..." << endl;
    cout << "\nFile created successfully!" << endl;
    obj.get();
    file.write((char *)&obj, sizeof(obj));
    file.close();
    cout << "\nFile saved and closed succesfully!" << endl;
    ifstream file1;
    file1.open("test.txt", ios::in);
    if (!file1)
        cout << "Error in opening file..";
    file1.read((char *)&obj, sizeof(obj));
    obj.put();
    file1.close();
    return 0;
}
