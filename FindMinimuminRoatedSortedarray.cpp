#include<bits/stdc++.h>
using namespace std;
int bin_search(vector<int> &nums,int st,int end,int Min){
    while(st <= end){
        int mid = (st+end)/2;
        if(nums[mid] <= Min){
            Min = nums[mid];
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return Min;
}
int main(){
    vector<int> nums = {3,4,5,1,2};
    int n = nums.size()-1;
    int st = 0;
    int end = n;
    int Min = nums[0];
    int mid = st-(st-end)/2;
    int left_Min = bin_search(nums,st,mid-1,Min);    
    int Right_Min = bin_search(nums,mid,end,Min);  
    cout<<min(left_Min,Right_Min);
}