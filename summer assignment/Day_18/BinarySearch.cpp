#include<iostream>
#include<algorithm>
using namespace std;
int Bin_search(int arr[6],int &n , int &trgt){
    int st = 0;
    int end = n-1;
    sort(arr,arr+n);
    for(int i = 0 ;i<n;i++){
        int mid = (st+end)/2;
        if(arr[mid] == trgt){
            return mid;
        }else if(arr[mid]>trgt){
            end = mid-1;
        }else{
            st++;
        }
    }
}

int main(){
    int arr[6] = {6,4,8,10,7,9};
    int n = 6;
    int trgt;
    cout<<"Enter target :: ";
    cin>>trgt;
    cout<<Bin_search(arr,n,trgt);
}