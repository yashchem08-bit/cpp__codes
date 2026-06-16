#include <bits/stdc++.h>
using namespace std;
vector<int> Single_number(vector<int> &nums)
{
    unordered_map<int,int> m;
    for(int i = 0;i<nums.size();i++){
        int x = nums[i];
        m[x]++;
    }
    for(auto &val : m){
        if(val.second == 1){
            cout<<val.first<<" ";
        }
    }
    
    
}

int main()
{
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    Single_number(nums);
}