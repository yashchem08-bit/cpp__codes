// #include<bits/stdc++.h>
// using namespace std;
// int maxpro(vector<int> &nums){
//     int Max = *max_element(nums.begin(),nums.end());
//     long long lar = LONG_LONG_MIN;
//     long long seclar = LONG_LONG_MIN;
//     for(int i = 0 ;i<nums.size();i++){
//         if(nums[i] >= lar || nums[i] != Max){
//             seclar = lar;
//             lar = nums[i];
//         }else if(nums[i] <= lar && nums[i] >= seclar || nums[i] != Max){
//             seclar = nums[i];
//         }
//     }
//     long long maxprod = Max*lar*seclar;
//     return (int)maxprod;

// }
// int main(){
//     vector<int> nums = {1000 , 1000 , 1000};
//     cout<<maxpro(nums);
// }

#include<bits/stdc++.h>
using namespace std;
int maxpro(vector<int> &nums){
    // vector<int> pos;
    // for(int i = 0 ;i<nums.size();i++){
    //     if(nums[i] < 0){
    //         pos.push_back(-nums[i]);
    //     }else{
    //         pos.push_back(nums[i]);
    //     }
        
    // }
    // int Max1 = *max_element(pos.begin(),pos.end());
    // pos.erase(remove(pos.begin(),pos.end(),Max1),pos.end());
    // int Max2 = *max_element(pos.begin(),pos.end());
    // pos.erase(remove(pos.begin(),pos.end(),Max2),pos.end());
    // int Max3 = *max_element(pos.begin(),pos.end());
    // pos.erase(remove(pos.begin(),pos.end(),Max3),pos.end());
    
    long long p = 1;

    long long max1 = LONG_LONG_MIN ;
    long long max2 , max3;
    max2 = max3 = max1;
    long long min1 = LONG_LONG_MAX;
    long long min2 = min1;

    max1 = *max_element(nums.begin(),nums.end());
    nums.erase(remove(nums.begin(),nums.end(),max1),nums.end());
    max2 = *max_element(nums.begin(),nums.end());
    nums.erase(remove(nums.begin(),nums.end(),max2),nums.end());
    max3 = *max_element(nums.begin(),nums.end());
    nums.erase(remove(nums.begin(),nums.end(),max3),nums.end());
    cout<<max1<<endl<<max2<<endl<<max3<<endl;

    min1 = *min_element(nums.begin(),nums.end());
    nums.erase(remove(nums.begin(),nums.end(),min1),nums.end());
    min2 = *min_element(nums.begin(),nums.end());
    nums.erase(remove(nums.begin(),nums.end(),min2),nums.end());
    cout<<min1<<endl<<min2<<endl;

    long long case1 = 1 , case2 = 1;
    if(min1 < 0 && min2 < 0){
        p *= min1*min2*max1;
        case1 = p;
    }else{
        p *= max1*max2*max3;
        case2 = p;
    }
    return max(case1,case2);

}
int main(){
    vector<int> nums = {-1,-2,-3};
    cout<<maxpro(nums);
}