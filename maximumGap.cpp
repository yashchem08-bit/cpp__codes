#include<bits/stdc++.h>
using namespace std;
void Max_gap(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    if(n <=2){
        cout<<0;
    }else{
    int i = 0,j = 1;    
    int Max = INT_MIN;
    // for(int i = 0 ;i<n;i++){
    //     Max = max(Max,nums[i]-nums[i-1]);
    // }
    while(i < n && j < n){
        if(nums[i]<nums[j]){
            int x = nums[j]-nums[i];
            if(Max < x){
                Max = x;
            }
            i++;
            j++;
            continue;
        }else{
            break;
        }
    }
    cout<< Max; 
    }
    
}
int main(){
    vector<int> nums = {3,6,9,1};
    Max_gap(nums);
}