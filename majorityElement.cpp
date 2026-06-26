#include <bits/stdc++.h>
using namespace std;
int Maj_ele(vector<int> &nums)
{
    int n = nums.size()-1;
   unordered_map<int,int> m;
   for(auto &val : nums){
    int x = val;
    m[x]++;
   }
   for(auto &out : m){
    if(out.second > n/2){
        return out.first;
    }
   }
}
int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<Maj_ele(nums);
}