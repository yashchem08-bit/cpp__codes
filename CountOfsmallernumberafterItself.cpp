#include <bits/stdc++.h>
using namespace std;
void count_smaller(vector<int> &nums, vector<int> &idx, vector<int> &re, int low, int mid, int high)
{
    int left = low, right = mid + 1;
    vector<int> temp;
    vector<int> tempidx;
    int j = mid + 1;
    for (int i = low; i <= mid; i++)
    {
        while (j <= high && nums[i] > nums[j])
        {
            j++;
        }
        re[idx[i]] += j - (mid + 1);
    }

    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            tempidx.push_back(idx[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            tempidx.push_back(idx[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(nums[left]);
        tempidx.push_back(idx[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(nums[right]);
        tempidx.push_back(idx[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i - low];
        idx[i] = tempidx[i-low];
    }
}
void merge_sort(vector<int> &nums, vector<int> &idx, vector<int> &re, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(nums, idx, re, low, mid);
    merge_sort(nums, idx, re, mid + 1, high);
    count_smaller(nums, idx, re, low, mid, high);
}
vector<int> ans(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n-1;
    vector<int> idx(n);
    for (int i = 0; i < n; i++)
    {
        idx[i] = i;
    }
    vector<int> re(n, 0);
    merge_sort(nums, idx, re, low, high);
    return re;
}
int main()
{
    vector<int> nums = {5,2,6,1};
    vector<int> res = ans(nums);
    for (auto &val : res)
    {
        cout << val << " ";
    }
}





// #include<bits/stdc++.h>
// using namespace std;
// vector<int> ans(vector<int> &nums){
//     int n = nums.size();
//     vector<int> ans(n,0);
//     vector<int> arr = nums;
//     sort(arr.begin(),arr.end());
//     for(int i = 0 ;i<n;i++){
//         int ele = nums[i];
//         arr.erase(remove(arr.begin(),arr.end(),ele),arr.end());
//         int count = 0;
//         for(auto &out : arr){
//             if(out >= ele){
//                 count = arr.size()-1;
//             }
//         }
//         ans[i] = count;
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums = {5,2,1,1};
//     vector<int> answer = ans(nums);
//     for(auto &val : answer){
//         cout<<val<<endl;
//     }
// }



