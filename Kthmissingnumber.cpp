#include<bits/stdc++.h>
using namespace std;
int missing( vector<int>& arr,int idx){
    return arr[idx] - (idx+1);
}
int Kth_missing(vector<int>& arr, int k){
    // int n = arr.size();
    // vector<int> v;
    // v.push_back(arr[0]-1);
    // for(int i = 1 ;i<n;i++){
    //     v.push_back(arr[i]-arr[i-1]-1);
    // }
    // // for(auto &a:v){
    // //     cout<<a<<" ";
    // // }
    // int j = 0;
    // int x = 0;
    // while( j <n && k-v[j] > 0){
    //     x = k-v[j]+1;
    //     j++;
    // }
    // k = x+v[j]-1;
    // return arr[x]+k;


    int n = arr.size(); // using bin_search
    int lw = 0 , high = n-1;
    while( lw <= high){
        int mid = lw+(high-lw)/2;
        if(missing(arr,mid) < k){
            lw = mid+1;
        }else if(missing(arr,mid) >= k){
            high = mid-1;
        }
    }
    if(lw == 0){
        return k;
    }
    return arr[lw-1]+k-missing(arr,lw-1);

}
int main(){
    vector<int> arr = {2,3,4,7,11};
    int k = 5;
    cout<<Kth_missing(arr,k);
}