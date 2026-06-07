#include <iostream>
using namespace std;
int main()
{
    int a, b , LCM = 0;         // LCM * GCD = A*B;
    cout << "Enter a nad b :: ";
    cin >> a >> b;
    int A = a ,B = b;
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
        cout<<"LCM IS :: "<<((A*B)/b)<<endl;
    }else{
        cout<<"LCM IS :: "<<((A*B)/a)<<endl;
    }
}