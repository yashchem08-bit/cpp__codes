#include<bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> &nums){
    vector<int> ans(nums.size());
    int p = 0 , n = 1;
    for(auto &val : nums){
        if(val >= 0){
            ans[p] = val;
            p += 2;
        }else{
            ans[n] = val;
            n += 2;
        }
    }
    for(auto &val : ans){
        cout<<val<<" ";
    }
}
int main(){
    vector<int> nums = {-1,1};
    rearrange(nums);
}