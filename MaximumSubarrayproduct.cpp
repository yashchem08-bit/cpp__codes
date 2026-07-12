// #include<bits/stdc++.h>
// using namespace std;
// int Max_Product(vector<int> &nums){
//     int n = nums.size()-1;
//     int i = 0 , j = i+1;
//     int maxx = INT_MIN;
//     while(i < n && j <= n){
//         long long p  = 1;
//         p =  nums[i]*nums[j];
//         if(p == 0){
//             p = 1;
//             i++;
//             p *= nums[i];
//             if(p > maxx){
//             maxx = (int)p;
//             }
//         }
//         if(p > maxx){
//             maxx = (int)p;
//         }
//         i++;
//         j++;
//     }
//     return maxx;
// }
// int main(){
//     vector<int> nums = {0,2};
//     cout<<Max_Product(nums);
// }


#include<bits/stdc++.h>
using namespace std;
int Max_Product(vector<int> &nums){
    int n = nums.size();
    int maxp = nums[0] , minp = nums[0] , res = nums[0];
    for(int i = 1; i<n;i++){
        if(nums[i] < 0){
            swap(maxp,minp);
        }
        maxp = max(nums[i],maxp);
        minp = min(nums[i],minp);
        res = max(res,maxp);
    }
    return res;
}
int main(){
    vector<int> nums = {0,2};
    cout<<Max_Product(nums);
}


