 #include <iostream>
using namespace  std;

int main()
{
    // declare variable
    int a = 15;
    int b = 20;

    // relational operators -> < , > , <= , <= , !=, ==
    cout <<"relational operators"<< endl ;
    cout << (a<b) <<endl ;



    // icrement and decrement oper ++ , --
    cout << "incr and decr operators"<< endl;
    a++;
    cout << a << endl ;
    b-- ;
    cout << b <<endl;
    // behaviors -> post incr(a++) and pre incre(++a)
    int x = 10;
    int y = x++;
    cout<< x << y << endl ;
    int z = ++x;
    cout<< x << z <<endl;


    // compound assignment:- +=, -=, /=, *=, %=
    cout << "Compound operators"<<endl;
    a += 10;// a = a + 10
    cout <<a <<endl;
    a -= 10;// a = 15
    cout <<a<<endl;
    a /= 5;//a=3
    cout<< a<< endl;
    a*= 10; //a= 30
    cout<< a <<endl;
    a%= 10;

    cout << a << endl;


    // arithematic ops
    cout << "Arithematic Operators" << endl;
    cout << (a+b)<<endl;
    cout << (a-b)<<endl;
    cout <<(float) a / b <<endl;
    cout << (a%b)<<endl;
    cout << (a*b)<<endl;

    cout<< "A  " << a <<endl;
    cout << "B  " << b << endl;


    return 0;
}
