#include <iostream>
using namespace std;
int fibo(int &n)
{
    int a = 0;
    int b = 1;
    int New;
    int i = 1;
    cout<<a<<endl<<b<<endl;
    while (i <= n)
    {
        New = a+b;
        cout<<New<<endl;
        a = b;
        b = New;
        i++;
    }
}
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    fibo(n);
}