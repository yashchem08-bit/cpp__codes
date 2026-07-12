#include<bits/stdc++.h>
using namespace std;
int count_pairs(vector<int> &nums , int low ,int mid, int high){
    int count = 0;
    int j = mid+1;
    for(int i = low ;i<=mid;i++){
        while(j <= high && (long long)nums[i] > 2LL*nums[j]){
            j++;
        }
        count += (j-mid-1);
    }
   
    int left = low;
    int right = mid+1;
    vector<int> temp;
    
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left++]);
        }else{
            temp.push_back(nums[right++]);
        }
    }   
    while(left <= mid){
        temp.push_back(nums[left++]);
    }
    while(right <= high){
        temp.push_back(nums[right++]);
    }

    for(int i = low ;i<= high;i++){
        nums[i] = temp[i-low];
    }

    return count;
}
int merge_sort(vector<int> &nums , int low , int high){
   
    if(low >= high){
        return 0;
    }
    int  mid = (low+high)/2;
    int count = merge_sort(nums,low,mid) + merge_sort(nums,mid+1,high);
    count += count_pairs(nums,low,mid,high);
    return count;
    
}
int reverse_pairs(vector<int> &nums){
    int low = 0;
    int high = nums.size()-1;
    int count = merge_sort(nums,low,high);
    return count;
}
int main(){
    vector<int> nums = {1,3,2,3,1};
    cout<<reverse_pairs(nums);
}