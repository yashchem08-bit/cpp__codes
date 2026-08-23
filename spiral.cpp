#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums = {{6,9,7}};
    int n = nums[0].size();
    int m = nums.size();
    vector<int> ans;

    int left = 0 , right = n-1;
    int top = 0 , bottom = m-1;

    while(top <= bottom && left <= right){
        for(int i = left ; i<=right;i++){
            ans.push_back(nums[top][i]);
        }
        top++;
        for(int i = top ;i<=bottom;i++){
            ans.push_back(nums[i][right]);
        }
        right--;

        if(top <= bottom){
            for(int i = right;i>=left;i--){
                ans.push_back(nums[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom;i>= top;i--){
                ans.push_back(nums[i][left]);
            }
            left++;
        }
    }

    for(auto &val : ans){
        cout<<val<<" ";
    }
}