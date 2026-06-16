// #include<bits/stdc++.h>
// using namespace std;
// void Per(vector<int> &nums , int idx){
//     if(idx >= nums.size()){
//         for(auto &val : nums){
//             cout<<val;
//         }
//         cout<<endl;
//     }
//     for(int i = idx ; i<nums.size();i++){
//         swap(nums[idx],nums[i]);
//         Per(nums,idx+1);
//         swap(nums[idx],nums[i]);
//     }
// }
// int main(){
//     vector<int> nums = {1,3,1};
//     Per(nums,0);

// }


#include<bits/stdc++.h>
using namespace std;
void Per(vector<int> &nums){
    int idx = -1;
    int n = nums.size();
    for(int i = n-2;i>=0;i--){
        if(nums[i] < nums[i+1]){
            idx = i;
        }
    }
    if (idx == -1){
        reverse(nums.begin(),nums.end());
        return;
    }else{
    for(int i = n-1;i>idx;i--){
        if(nums[idx] < nums[i]){
            swap(nums[idx],nums[i]);
        }
    }
    reverse(nums.begin()+idx+1,nums.end());
    for(auto &val : nums){
        cout<<val<<" ";
    }
    cout<<endl; 
    }
    

}
int main(){
    vector<int> nums = {1,3,1};
    Per(nums);

}