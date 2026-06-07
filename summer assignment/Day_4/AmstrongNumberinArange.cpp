#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int count = 0, temp = i, ams = 0;
        while (i > 0)
        {
            count++;
            i /= 10;
        }
        i = temp;
        for (int j = 1; j <= count; j++)
        {
            int ld = temp % 10;
            ams += pow(ld, count);
            temp /= 10;
        }
        if (i == ams)
        {
            cout << "amstrong number "<<i<<endl;
        }
    }
}