#include <iostream>
using namespace std;
void reverse(int arr[], int i, int j)
{

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
     for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i, j;
    reverse(arr,0,n-1);
   
}