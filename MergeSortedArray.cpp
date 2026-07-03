#include<bits/stdc++.h>
using namespace std;
void merge_array(vector<int> &nums1 ,int m ,vector<int> &nums2, int n){
    
    int j = 0;
    for(int i = 0;i<m;i++){
        if(nums1[i] == 0 && j < n){
                nums1.insert(nums1.begin() + i , nums2[j]);
                j++;
        }
    }
    for(int k = 0 ;k<j;k++){
        nums1.pop_back();
    }
    sort(nums1.begin(),nums1.end());
    // for(int i = 0;i<m;i++){
    //     ans.push_back(nums1[i]);
    //     if(nums1[i] == 0){
    //         zerocount++;
    //     }else{
    //         idx++;
    //     }
    // }
    // for(int j = 0 ; j<n;j++){
    //     ans.push_back(nums2[j]);
    //      if(nums2[j] == 0){
    //         zerocount++;
    //     }else{
    //         idx++;
    //     }
    // }
    
    //  sort(ans.begin(),ans.end(),greater<int>());
    // for(int l = 0 ;l<zerocount;l++){
    //     ans.pop_back();
    // }
    
    // sort(ans.begin(),ans.end());
    
    
    // for(int k = 0 ;k<idx;k++){
    //     nums1[k] = ans[k];
    // }
    for(auto &val : nums1){
        cout<<val<<" ";
    }
    
}
int main(){
    vector<int> nums1  = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,4,5};
    int n = nums2.size();
    merge_array(nums1,m,nums2,n);
}