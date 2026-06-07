#include <iostream>
#include<limits.h>
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
    int max = INT_MIN;
    int min = -1;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        if(arr[i]>max){
            max = arr[i];
        }else{
            min = arr[i];
        }

    }
    cout<<"MAX ELEMENT IS "<<max<<endl<<"MIN ELEMNET IS "<<min<<endl;
}