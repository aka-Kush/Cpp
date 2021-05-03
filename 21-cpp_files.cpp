//File Handling In C++
//* ofstream	: Creates and writes to files
//* ifstream	: Reads from files
//* fstream	    : A combination of ofstream and ifstream: creates, reads, and writes to files

//how to create and write to file using ofstream
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

//how to create, write and read from a file using ifstream & ofstream
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

//how to append data to a existing file instead of destroying previous data
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