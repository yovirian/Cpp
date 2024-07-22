#include <iostream>
using namespace std;

int main()
{
    long long int number = 1234567890123;
     int number_int = number;

    cout << number<< endl;
    cout << number_int<< endl;
    cout <<""<<endl ;

    cout << sizeof(number)<<endl;
    cout << sizeof (number_int)<<endl;
    cout << sizeof(short int)<< endl;

    return 0;
}
