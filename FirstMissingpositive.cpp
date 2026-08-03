#include<bits/stdc++.h>
using namespace std;
int missing_positive(vector<int> &nums){
    int n = nums.size();
    for(int i = 0 ;i<nums.size();i++){
       while(nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i]){
        swap(nums[i],nums[nums[i]-1]);
       }
    }
    for(int i = 0 ;i<nums.size();i++){
        if(nums[i] != i+1 && nums[i] >= 0){
            return i+1;
        }
    }
    return n+1;



    sort(nums.begin(),nums.end());      // using binary_search
    int trgt = 1;

    for(int i : nums){
        if(n  > 0 && n == trgt){
            trgt++;
        }else if(i > trgt){
            return trgt;
        }
    }
    return trgt;
}
int main(){
    vector<int> nums = {1,2,0};
    cout<<missing_positive(nums);
}