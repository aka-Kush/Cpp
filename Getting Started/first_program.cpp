// A C++ stream is a flow of data into or out of a program, such as the data written to cout or read from cin
// std (standard) and colon are 'standard' in c++

#include <iostream> // iostream is a library which contains input output codes like cout and cin

int main() // program execution starting from the main function ; there must be only one main function
{
    int fav_num; // fav_num is a variable of type int
    std::cout << "Enter your favourite number between 1 and 100: ";
    // cout (pronounced as c-out) is used to send data to terminal, like here we are sending string
    // << insertion operator is used to insert data to the stream, like inserting string to cout stream

    std::cin >> fav_num;
    // cin (pronounced as c-in) is used to recieve data from terminal, like here we are recieving user favourite number
    // >> extraction operator is used to read data from the stream, like reading user input from cin stream and putting the data inside our variable
    // the insertion and extraction operator are used according to the flow of data/program

    std::cout << "Amazing! That's my favourite number too!" << std::endl;
    // endl is used to endline and bring cursor to the starting of next line

    return 0; // returning 0 in order to ensure that the program ran successfully
}
