#include <iostream>
using namespace std;
int missing_number(int arr[], int &n)
{
    for (int i = 0; i <= n; i++)
    {
        int st = 0;
        int trgt = i;
        bool ispresent = true;
        while (st != n - 1)
        {
            if (arr[st] == trgt)
            {
                ispresent = true;
                st++;
                break;
            }
            else
            {
                ispresent = false;
                st++;
            }
        }
        if (ispresent == false)
        {
            int mis = i;
            cout << "missing number :: " << mis << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter range :: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Missing number is :: " << missing_number(arr, n);
}