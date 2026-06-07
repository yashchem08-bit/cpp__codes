#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array :: ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    float avg = 0;
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++){
        sum += arr[i];
    }
    avg = (float)sum/(sizeof(arr)/sizeof(arr[0]));
    cout<<"sumation of elements are  :: "<<sum<<endl<<"average of elements is :: "<<avg<<endl;
}