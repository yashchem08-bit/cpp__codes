#include <iostream>
using namespace std;
int factor(int arr[100], int &n)
{
    int i = 1;
    int j = 0;
    while (i <= n / 2)
    {
        if(n%i == 0){
            arr[j] = i;
            j++;
        }
        i++;
    }
    for(int k = 0 ;k<j;k++){
        cout<<arr[k]<<endl;
    }
}
int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    int arr[100];
    factor(arr,n);
}