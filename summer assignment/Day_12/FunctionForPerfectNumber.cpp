#include <iostream>
using namespace std;
int perfect(int &n, int &temp)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            int fact = i;
            sum += fact;
        }
    }
    if (sum == temp)
    {
        cout << "perfect number";
    }
    else
    {
        cout << "not perfect number";
    }
}
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    int temp = n;
    perfect(n, temp);
}