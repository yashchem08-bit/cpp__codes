#include<bits/stdc++.h>
using namespace std;
int diff(vector<int> &arr){
   vector<int> max_diff;
   int i = 0 , j = arr.size()-1;
   while( i <= j){
    int sum = abs(arr[i]-arr[j]) + abs(i-j);
    max_diff.push_back(sum);
    if(arr[j] < arr[j-1] && arr[i] < arr[i+1]){
        j--;
    }else{
        i++;
    }
   }
   for(auto &val : max_diff){
    cout<<val<<" ";
   }
   cout<<endl;
   int MAX = *max_element(max_diff.begin(),max_diff.end());
   return MAX;
}
int main(){
    vector<int> arr = {1,2,3,1};
    cout<<diff(arr)<<endl;
}