#include <iostream>
using namespace std;
int fibo(int &n)
{
    int a = 0, b = 1, New, i = 1;
    while (i <= n)
    {
        New = a + b;
        a = b;
        b = New;
        i++;
    }
    cout << New << endl;
}
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    fibo(n);
}