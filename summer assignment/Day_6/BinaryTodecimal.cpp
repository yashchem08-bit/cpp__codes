#include <iostream>
#include<math.h>
using namespace std;
int decimal( int &n)
{
    int deci = 0;
    int i = 0;
    while(n != 0){
        int ld = n%10;
        deci += ld*pow(2,i);
        n /= 10;
        i++;
    }
    return deci;
}
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    cout<<decimal(n);
}