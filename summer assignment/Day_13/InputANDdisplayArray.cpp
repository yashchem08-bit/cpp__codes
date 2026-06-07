#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter n :: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array :: ";
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++){
        cin>>arr[i];
    }
    cout<<"Entered elements are :: ";
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++ ){
        cout<<arr[i]<<" ";
    }

}