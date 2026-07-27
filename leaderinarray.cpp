#include<bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int> &nums){
    int n = nums.size();
    vector<int> ans;
    // int i = 0 ;      //0(n^2) approach
    // while(i < n ){
    //     int j = i+1;
    //     bool found = false;
    //     while(j < n){
    //         if(nums[j] >= nums[i]){
    //             found = false;
    //             break;
    //         }else{
    //             found = true;
    //             j++;
    //         }
    //     }
    //     if(found == true){
    //         ans.push_back(nums[i]); 
    //     }
    //     i++;
    // }
    // ans.push_back(nums[n-1]);


    int maxele = nums[n-1];     //0(n) approch
    ans.push_back(maxele);
    for(int i = n-2; i>= 0;i--){
        if(nums[i] >= maxele){
            ans.push_back(nums[i]);
            maxele = nums[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;


    for(auto &val : ans){
        cout<<val<<" ";
    }
}
int main(){
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    leader(nums);
}