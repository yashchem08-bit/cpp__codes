#include<bits/stdc++.h>
using namespace std;
int find(vector<int> &nums){
    int n = nums.size();
    int Max = INT_MIN , Min = INT_MAX;
    for(int i = 0 ;i<n;i++){
        Max = max(Max,nums[i]);     // largest range(ending point)
        Min = min(Min,nums[i]);     // smallest range(satrting point)
    }

    int sum = 0;
    for(int i = 0 ;i<n;i++){
        sum += nums[i];
    }
    int nsum =0;
    for(int i = Min;i<=Max;i++){
        nsum += i;
    }
    int res =  nsum - sum;

    vector<bool> yes(n,false);
    vector<bool> YES(n,true);
    for(int i = 0 ;i<n;i++){
        if(nums[i] > n){
            yes[i] = true;
        }
    }
    
    if(yes == YES){
        return 1;
    }
    else if(res == 0){
        return Max+1;
    }
    else if(res < 0){
        return 1;
    }else{
        return res;
    }

    //cout<<sum<<endl<<nsum<<endl<<Max<<endl<<Min;

}
int main(){
    vector<int> nums = {7, 8, 9, 11, 12};
    cout<<find(nums);
}