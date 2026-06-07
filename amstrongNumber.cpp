#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;

    int temp = n;
    int newTemp = temp;
    int count = 0;

    while (n > 0)
    {
        count++;
        n /= 10;
    }

    int Ams = 0;

    for (int i = 1; i <= count; i++)
    {
        int digit = temp % 10;
        digit = pow(digit, count);
        temp /= 10;
        Ams += digit;
    }
    if (Ams == newTemp)
    {
        cout << "YES amstrong:: ";
    }
    else
    {
        cout << "NO amstrong:: ";
    }
}