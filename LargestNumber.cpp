#include<bits/stdc++.h>
using namespace std;
string per(vector<int> &arr,int idx){
    // string str;
    // int max = INT_MIN;
    vector<string> str;
    if (idx >= arr.size()){
        for(auto &val : arr){
           cout<<val;
        }
        cout<<endl;
        
    }
    
    for(int i = idx ;i< arr.size();i++){
        swap(arr[idx],arr[i]);
        per(arr,idx+1);
        swap(arr[idx],arr[i]);
    }
    
}
int main(){
    vector<int> arr = {3,30,34,5,9};
    int idx = 0;
    per(arr,idx);
}