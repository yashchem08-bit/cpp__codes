#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int oddsum = 0, evensum = 0;
    int x = n;
    int i = 1, j = 0;
    while (n > 0)
    {
        oddsum += i;
        i += 2;
        n--;
    }
    while (x >= 0)
    {
        evensum += j;
        j += 2;
        x--;
    }
    cout << oddsum << endl
         << evensum << endl;

    while (oddsum >= 0 || evensum >= 0)
    {
        if (oddsum == evensum)
        {
            oddsum = oddsum - evensum;
            break;
        }
        else if (evensum > oddsum)
        {
            evensum = evensum - oddsum;
        }
        else
        {
            oddsum = oddsum - evensum;
        }
    }

    if (oddsum == 0)
    {
        cout << "GCD IS :: " << evensum << endl;
    }
    else
    {
        cout << "GCD IS :: " << oddsum << endl;
    }
}