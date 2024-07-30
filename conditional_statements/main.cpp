#include <iostream>
using namespace std;

int main()
{
    int phone = 20;// declare the main aspect
    int money;
    string Budget;
    //taking input for the aspect
    cout << "Your Budget for phone "<< endl;
    cin >> money ;
/*   if(condition)
    {this block gets executed when the condition is true }

    else {code if it is false}
 */
    if (40>money>30)
    {
        cout << "Buy a laptop!!";

    }
    // else if(condn){code}
    // Multiple IFs

    if (money<= 20){
        cout << "great there are many options" << endl;
    }

    // else if(condn){code}
    else if(money>40 )
    {
        cout<< " buy a iphone!!" << endl;
        cout << " thanks for Shopping !!"<< endl;
    }
    // else loop only if false
    else
    {
        cout<<"a Huge is coming up no problem"<<endl;
    }

}



