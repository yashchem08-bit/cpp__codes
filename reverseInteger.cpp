#include <bits/stdc++.h> //square of n--
using namespace std;
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;

    bool isnegative = false;
    if (n < 0)
    {
        isnegative = true;
        n = -n;
    }
    int temp = n;
    // first digit count ...
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    int rev = 0;
    for (int i = count; i > 0; i--)
    {
        int ld = n % 10;
        rev += ld * pow(10,i-1);
        n /= 10;
    }

    if (isnegative == true)
    {
        cout << rev << "- ";
    }
    else
    {
        cout << rev;
    }
    cout << endl;
    return 0;
}