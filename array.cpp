#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ;
    cout<<"Enter n :: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array :: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
    if(arr[i] > max){
    max = arr[i];
    }
    if(arr[i] < min){
        min = arr[i];
    }
    }

    cout<<"larget element is :: "<<max<<endl<<"smallest element"<<min<<endl;
    float sum = 0 , sumofeven = 0;
    for(int i = 0 ;i<n; i++){
        sum += arr[i];
    if(arr[i]%2 == 0){
        sumofeven += arr[i];
    }
    }
    float avg = sum/n;
    cout<<"average of elements are"<<avg<<endl<<"sum of even numbers are "<<sumofeven;

}