#include<bits/stdc++.h>
using namespace std;
int Remove_Duplicate(vector<int> &nums){
    int n = nums.size();
    set<int> s;
    for(auto &val : nums){
        if(s.find(val) == s.end()){
            s.insert(val);
        }
    }
    nums.clear();
    for(auto &v : s){
        nums.push_back(v);
    }
    for(auto &out : nums){
        cout<<out<<" ";
    }
    int k = nums.size();
    return k;
}
int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    Remove_Duplicate(nums);
}