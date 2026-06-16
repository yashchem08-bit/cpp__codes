#include <iostream>
#include <algorithm>
using namespace std;
int rotate(int arr[5], int i, int j)
{
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{

    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int k, i, j;
    cout << "HOW MUCH TIMES YOU WANT TO ROTATE ARRAY TO RIGHT ";
    cin >> k;
    rotate(arr, 0, n-1 );
    rotate(arr, 0, k-1 );
    rotate(arr, k, n - 1);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}