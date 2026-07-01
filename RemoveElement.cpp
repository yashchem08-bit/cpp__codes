#include<bits/stdc++.h>
using namespace std;
int Remove_ele(vector<int> &nums , int val){
    int count = 0;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == val){
                count++;
            }
            else{
                ans.emplace_back(nums[i]);
            }
        }
    int k = n - count;
    for(int i = 0;i<count;i++){
        nums.pop_back();
    }
    for(int j = 0;j<k;j++){
        nums[j] = ans[j];
    }
    cout<<endl;
    for(int i = 0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return k;
}
int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout<<Remove_ele(nums,val);
}