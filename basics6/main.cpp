#include <iostream>
using namespace std;

int main()
{         //int/int
    cout << (5/2)  << endl;
          //int/float
    cout << (5/2.0)<< endl;
    // implicit typecasting compiler automatically changes the type of result.
    cout << (5.0/2)<< endl;

    /*priority order
     float
     int
     char
     bool
     */

    // Char + int
    char letter = 'C';
    cout << letter <<endl;
    cout << letter + 1 << endl;

    letter = 100 + letter;
    cout <<     letter     <<endl;

    // boolean + int
    cout <<(true + 1)<< endl;


    return 0;
}
