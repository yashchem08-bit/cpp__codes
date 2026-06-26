#include <bits/stdc++.h>
using namespace std;
int count_primes(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 0)
    {
        return 0;
    }
    int count = 0;

    for(int i = 2;i<n/2;i++)
    {
        bool isprime = true;
        for (int j = 2; j*j <= i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime == true)
        {
            count++;
        }
    }
    for(int i = n/2;i<n;i++)
    {
        bool isprime = true;
        for (int j = 2; j*j <= i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime == true)
        {
            count++;
        }
    }
    
    return count;
}
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    cout << count_primes(n);
}