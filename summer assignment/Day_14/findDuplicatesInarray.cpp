#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    int arr[n]; // 5,3,2,2,3,5,6
    cout << "Enter elements of array :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int temp = arr[i];
        for (int j = i; j < n; j++)
        {
            if (arr[j] == temp)
            {
                count++;
                if (count >= 2)
                {
                    cout << "duplicate elemnet found at index " << j << endl;
                }
            }
        }
    }
}