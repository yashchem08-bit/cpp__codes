#include<bits/stdc++.h>
using namespace std;
vector<int> spiral_matrix(vector<vector<int>> &nums){
    int m = nums.size();
    int n = nums[0].size();
    vector<int> ans;
    int top = 0, bottom = m-1;
    int left = 0,right = n-1;
    while(top <= bottom && left <= right){
        for(int i = left ;i<= right;i++){
            ans.push_back(nums[top][i]);
        }
        top++;
        for(int j = top;j<= bottom ;j++){
            ans.push_back(nums[j][right]);
        }
        right--;
        if(top <= bottom){
        for(int k = right;k >= left;k--){
            ans.push_back(nums[bottom][k]);
        }
        bottom--;
        }
        if(left <= right){
            for(int l = bottom;l>=top;l--){
                ans.push_back(nums[l][left]);
            }
            left++;
        }
        
    }
    for(auto &val : ans){
        cout<<val<<" ";
    }
}
int main(){
    vector<vector<int>> nums = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    spiral_matrix(nums);
}