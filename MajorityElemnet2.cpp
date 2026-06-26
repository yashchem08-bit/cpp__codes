#include<bits/stdc++.h>
using namespace std;
vector<int> Majority_Element(vector<int> &nums){
    int n = nums.size();
    unordered_map<int,int> m;
    for(int i = 0 ;i<n;i++){
        int x = nums[i];
        m[x]++;
    }
    vector<int> arr(n);
    for(auto &out : m){
        if(out.second > n/3){
            arr.push_back(out.first);
        }
    }
    return arr;
}
int main(){
    vector<int> nums = {3,2,3};
    Majority_Element(nums);
}

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> Majority_Element(vector<int> &nums){
//     int n = nums.size();
//     int x = n/3;
//     int i = 0 ,j = 0;
//     int cnt = 0;
//     while(i < n  || j < n){
       
//         int temp 
//     }
// }
// int main(){
//     vector<int> nums = {3,2,3};
//     Majority_Element(nums);
// }