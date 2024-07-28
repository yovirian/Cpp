#include <iostream>
using namespace std;

int main()
{
    /*Bitwise opes --> only for bits of no.( int or char)
     & - bitwise And
     | - Bitwise OR
     ^ - Bitwise Xor
     ~ - Bitwise 1's compliment
     << - left shift
     >> - right shift
     */
    cout <<" Bitwise operators"<< endl;
    cout <<(5 & 7)<< endl ;
    cout <<(5|7)<< endl;
    cout <<(5^7)<<endl;
    cout <<(~1 ) << endl;// FLip all bits of a no.
    cout << (2<<3)<< endl;


    return 0;
}
