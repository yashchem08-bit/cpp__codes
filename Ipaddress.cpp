#include <bits/stdc++.h>
using namespace std;
void IP(int fn)
{
    vector<int> IP;
    for (int i = 1; i <= 4; i++)
    {
        IP.push_back(fn);
    }
    cout << "valid IP address's for a given number is :: " << endl;
    for (auto val : IP)
    {
        cout << val << ".";
    }
    cout << endl;
}
int validIP(vector<int> &n)
{
    int st = 0;
    int len = n.size();

    while (st != len)
    {
        int fn = n[st];

        while (fn < 255)
        {
            st++;
            fn = fn *10 + n[st];
        }
        if (fn < 255)
        {
            IP(fn);
        }
        else
        {
            fn = fn / 10;
            IP(fn);
            st--;
        }
    }
}
int main()
{
    long num; // 123456789
    cout << "Enter number :: ";
    cin >> num;
    vector<int> n;
    long temp = num;
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    for (int i = 0; i < count; i++)
    {
        int ld = num % 10;
        n.push_back(ld);
        num /= 10;
    }
    validIP(n);
}
