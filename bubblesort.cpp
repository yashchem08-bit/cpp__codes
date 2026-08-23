#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {5,4,3,2,4,6,1};
    int n = arr.size();
    for(int i = n-2;i>=0;i--){
        for(int j = n-i-2;j>=0;j--){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int val:arr){
        cout<<val<<" ";
    }
}