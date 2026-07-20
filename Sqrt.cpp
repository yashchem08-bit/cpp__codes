// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if (n < 0)
//     {
//         return 0;
//     }
//     int st = 0, end = n;
//     while (st <= end)
//     {
//         int mid = (st + end) / 2;
//         long long x = mid * mid;
//         if (x <= n)
//         {
//             st = mid+1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     cout<<end;
// }

#include <bits/stdc++.h>
using namespace std;

int newtonSqrt(double n)
{
    if (n < 0)
        return -1;
    double x = n;  
    for (int i = 0; i < 20; i++)
    { 
        x = 0.5 * (x + n / x);
    }
    return x;
}

int main()
{
    double n;
    cin >> n;
    cout << newtonSqrt(n);
}
