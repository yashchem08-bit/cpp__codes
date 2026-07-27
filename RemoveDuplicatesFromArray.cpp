// #include<bits/stdc++.h>
// using namespace std;
// int Remove_Duplicate(vector<int> &nums){
//     int n = nums.size();
//     set<int> s;
//     for(auto &val : nums){
//         if(s.find(val) == s.end()){
//             s.insert(val);
//         }
//     }
//     nums.clear();
//     for(auto &v : s){
//         nums.push_back(v);
//     }
//     for(auto &out : nums){
//         cout<<out<<" ";
//     }
//     int k = nums.size();
//     return k;
// }
// int main(){
//     vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
//     Remove_Duplicate(nums);
// }


#include<bits/stdc++.h>     // using two pointer
using namespace std;
void Remove_Duplicate(vector<int> &nums){
    int n = nums.size();
    vector<int> ans;
    int count = 1;
    int i = 1 ;
    ans.push_back(nums[0]);
    while(i < n){
        int j = nums[i-1];
        if(nums[i] == j){
            i++;
        }else{
            count++;
            ans.push_back(nums[i]);
            i++;
        }
        
    }
    for(auto &val : ans){
        cout<<val<<"  ";
    }
}
int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    Remove_Duplicate(nums);
}