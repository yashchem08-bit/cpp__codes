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
    int oddcount = 0 , evencount = 0;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        if(arr[i] % 2 == 0){
            evencount++;
        }else{
            oddcount++;
        }
    }
    cout<<"ODD COUNT IS :: "<<oddcount<<endl<<"EVEN COUNT IS :: "<<evencount<<endl;
}
