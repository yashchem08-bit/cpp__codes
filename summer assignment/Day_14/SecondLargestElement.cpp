#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lar = INT_MIN;
    int seclar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            seclar = lar;
            lar = arr[i];
        }
        else if (arr[i] > seclar && arr[i] != lar)
        {
            seclar = arr[i];
        }
    }
    cout << "Second largest element is :: " << seclar;
}