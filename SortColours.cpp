#include<bits/stdc++.h>
using namespace std;
int partition_idx(vector<int> &nums, int low , int high){
    int i = low , j = high;
    int pivot = nums[low];
    while(i < j){
        while(nums[i] <= pivot && i <= high-1){
            i++;
        }
        while(nums[j] > pivot && j >= low +1) {
            j--;
        }
        if(i <j){
            int temp = nums[j];
            nums[j] = nums[i] ;
            nums[i] = temp;
        }
    }
    int tmp = nums[j];
    nums[j] = nums[low];
    nums[low] = tmp;
    return j;
}
void Quick_sort(vector<int> &nums, int low , int high){
    if(low < high){
        int partion_idx = partition_idx(nums,low,high);
        Quick_sort(nums,low,partion_idx-1);
        Quick_sort(nums,partion_idx+1,high);
    }
}
int main(){
    vector<int> nums = {2,0,1,0,0,2,1};   // 0 red // 1 white // 2 blue
    int n = nums.size();
    int low = 0;
    int high = n-1;
    Quick_sort(nums,low,high);
    for(auto &val : nums){
        cout<<val<<" ";
    }
}