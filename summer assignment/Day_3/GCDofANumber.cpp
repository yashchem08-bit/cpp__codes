#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a nad b :: ";
    cin >> a >> b;
    while (a >= 0 || b >= 0)
    {
        if (a == b)
        {
            break;
            a = a - b;
        }
        else if (b > a)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }

    if(a == 0){
        cout<<"GCD IS :: "<<b<<endl;
    }else{
        cout<<"GCD IS :: "<<a<<endl;
    }
}