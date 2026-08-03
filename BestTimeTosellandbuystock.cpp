// #include<bits/stdc++.h>
// using namespace std;
// int Best_time(vector<int> &nums){
//     int n = nums.size();
//     int mini = INT_MAX,maxi = INT_MIN;
//     int i = 1, j = 0,k = 0;
//     int max_profit = 0;
//     while(i <= n){
//         if(nums[i-1] < mini ){
//             mini = nums[i-1];
//             j = i;
//             cout<<mini<<" mini , j "<<j<<endl;
//         }else if(nums[i-1] >= maxi){
//             maxi  = nums[i-1];
//             k = i;
//             cout<<maxi<<" maxi , k "<<k<<endl;
//         }
//         max_profit = max(max_profit,nums[k-1]-nums[j-1]);
//         i++;
//     }
    
//     if(k == 0 || j == 0){
//         return 0;
//     }else{
//         return max_profit;
//     }

// }
// int main(){
//     vector<int> nums = {7,1,5,3,6,4};
//     cout<<Best_time(nums);
// }


#include<bits/stdc++.h>
using namespace std;
int Best_time(vector<int> &nums){
    int n = nums.size();
    int mini = nums[0];
    int p = 0;
    for(int i = 1;i<n;i++){
        if(nums[i] < mini){
            mini = nums[i];
        }else if(nums[i] - mini > p){
            p = nums[i]  - mini;
        }
    }
    return p;
}
int main(){
    vector<int> nums = {2,4,1};
    cout<<Best_time(nums);
}