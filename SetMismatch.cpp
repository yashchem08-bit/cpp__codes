#include<bits/stdc++.h>
using namespace std;
int Find_errors(vector<int> &nums){
int n = nums.size();
unordered_map<int,int> freq;
for(auto &val:nums){
    freq[val]++;
}
vector<int> ans;
for(auto &val : freq){
   if(val.second == 2){
    ans.push_back(val.first);
   }
}
for(int i = 1; i<=n;i++){
    if(freq.find(i) == freq.end()){
        ans.push_back(i);
    }
}
for(auto &val : ans){
    cout<<val<<" ";
}

}
int main(){
    vector<int> nums = {1,2,2,4};
    Find_errors(nums);
}