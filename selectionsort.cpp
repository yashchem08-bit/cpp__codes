#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {5,4,3,2,4,6,1};
    int n = arr.size();
    for(int i = 0;i<n-1;i++){
        int min = INT_MAX;
        int min_idx = -1;
        for(int j = i ;j<n;j++){
            if(arr[j] < min){
                min = arr[j];
                min_idx = j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    for(int val:arr){
        cout<<val<<" ";
    }
}