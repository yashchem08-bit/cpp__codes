#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[5] = {8,1,4,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n-1;i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j = i; j<n-1;j++){
            if(min>arr[j]){
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}