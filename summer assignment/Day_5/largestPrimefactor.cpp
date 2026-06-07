#include <iostream>
#include<limits.h>
using namespace std;
int larfactor(int arr[100],int j){
    int max = INT_MIN;
    for(int i = 0;i<j;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<max<<endl;
}
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
    larfactor(arr,j);
}

int main()
{
    int n;
    cout << "Enter n :: ";
    cin >> n;
    int arr[100];
    factor(arr,n);

}