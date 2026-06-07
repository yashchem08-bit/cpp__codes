#include <iostream>
using namespace std;
int binary(int &n)
{
    int bin[32] = {0};
    int i = 0;
    while (n != 0)
    {
        bin[i] = n % 2;
        i++;
        n /= 2;
    }
    while (i != 0)
    {
        cout << bin[i - 1];
        i--;
    }
}
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    binary(n);
}