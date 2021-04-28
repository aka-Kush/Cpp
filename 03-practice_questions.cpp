//Problem Statement 1
//WAP to find average marks of five subjects of a student in a class.
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float sum, marks, avg;

    cout << "Enter total number of subjects: ";
    cin >> n;
    cout << "Enter marks of " << n << " subjects (seperated with space): ";
    for (i = 0; i < n; i++)
    {
        cin >> marks;
        sum += marks;
        //marks = 0;
    };

    cout << "Total marks = " << sum << endl;

    avg = float(sum / n);
    cout << "Average marks of " << n << " subjects are = " << avg << endl;
    return 0;
}

//Problem Statement 2
//WAP to swap first and last digits of any number. (For ex:-n=12345, Output:-52341)
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, first, last, sum, dig, num, x, y;

    cout << "Input your number: ";
    cin >> n;
    dig = (int)log10(n);
    first = n / pow(10, dig);
    last = n % 10;
    x = first * (pow(10, dig));
    y = n % x;
    n = y / 10;
    num = last * (pow(10, dig)) + (n * 10 + first);
    cout << "Number after swaping the last and first digit is: " << num << endl;
}

//Problem Statement 3
//WAP to generate the Fibonacci series up to user specified limit. Write all the missing terms (e.g. 4, 6, 7, 9, 10, 11, 12, 14, 15…) also at the end.
#include <iostream>
using namespace std;
int main()
{
    int n, first = 0, second = 1, next = 0;
    cout << "Enter length of Fibonacci series: ";
    cin >> n;
    int fib[n];
    cout << "Fibonacci series is: ";
    for (int i = 1; i <= n; i++)
    {
        fib[i] = first;
        cout << first << " , ";
        next = first + second;
        first = second;
        second = next;
    }

    cout << "\nMissing numbers are :" << endl;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = fib[i] + 1; j < fib[i + 1]; j++)
            cout << j << " , ";
    }
    return 0;
}

//Problem Statement 4
//WAP to input a matrix of dimension m*n. If base address is 1000. Find the address of (m-1, n-1) element of the matrix.
#include <iostream>
using namespace std;
int main()
{
    int b, i, j, w, h = 0, k = 0;
    int row, col;
    cout << "Enter number of rows and columns respectively: ";
    cin >> row >> col;
    int arr[row][col];
    cout << "Enter the no. of elements in array: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter the base address: ";
    cin >> b;
    cout << "enter the storage size of one element stored in array: ";
    cin >> w;
    i = row - 1;
    j = col - 1;
    cout << "address of A[i][j] is  " << b + w * (col * (i - h) + (j - k));
    return 0;
}