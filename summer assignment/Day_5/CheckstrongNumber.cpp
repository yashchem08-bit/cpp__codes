#include <iostream>
using namespace std;
int fact(int ld)
{
    int fact = 1;
    for (int i = 1; i <= ld; i++)
    {
        fact *= i;
    }
    return fact;
}
int strong(int &temp, int &Ntemp)
{
    int sum = 0;
    while (temp != 0)
    {
        int ld = temp % 10;
        sum += fact(ld);
        temp /= 10;
    }
    if (Ntemp == sum)
    {
        cout << "strong number ";
    }
    else
    {
        cout << "Not a strong number ";
    }
}
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    int temp = n, Ntemp = n;

    strong(temp, Ntemp);
}