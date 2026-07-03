// #include <bits/stdc++.h>
// using namespace std;
// int bin_search(vector<int> &nums, int st, int end, int target)
// {

//     while (st <= end)
//     {
//         int mis = (st + end) / 2;
//         if (nums[mis] == target)
//         {
//             return mis;
//         }
//         else if (nums[mis] < target)
//         {
//             st = mis + 1;
//         }
//         else
//         {
//             end = mis - 1;
//         }
//     }
//     return -1;
// }
// vector<int> Find_trgt(vector<int> &nums, int target)
// {
//     int st = 0;
//     int end = nums.size();

//     vector<int> ans;
//     if (st > end)
//     {
//         return ans;
//     }
//     int mid = (st + end) / 2;

//     ans.push_back(bin_search(nums, st, mid, target));
//     ans.push_back(bin_search(nums, mid , end, target));
//     ans.push_back(bin_search(nums, st, end, target));

//     if (nums.empty())
//     {
//         ans.push_back(-1);
//         ans.push_back(-1);
//         return ans;
//     }
//     if (ans.empty())
//     {
//         ans.push_back(-1);
//         ans.push_back(-1);
//         return ans;
//     }
//     int Min = ans[0], Max = ans[0];
//     for (auto &val : ans)
//     {
//         Min = min(Min, val);
//         Max = max(Max, val);
//     }
//     vector<int> re;
//     re.push_back(Min);
//     re.push_back(Max);
//     return re;
// }
// int main()
// {
//     vector<int> nums = {2,2};
//     int target = 3;
//     vector<int> res = Find_trgt(nums, target);
//     for (auto &val : res)
//     {
//         cout << val << " ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int findFirst(vector<int> &nums, int target)
{
    int lo = 0, hi = (int)nums.size() - 1, result = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target)
        {
            result = mid;
            hi = mid - 1;
        }
        else if (nums[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return result;
}

int findLast(vector<int> &nums, int target)
{
    int lo = 0, hi = (int)nums.size() - 1, result = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target)
        {
            result = mid;
            lo = mid + 1;
        }
        else if (nums[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return result;
}

vector<int> Find_trgt(vector<int> &nums, int target)
{
    if (nums.empty())
        return {-1, -1};
    return {findFirst(nums, target), findLast(nums, target)};
}

int main()
{
    vector<int> nums = {2, 2};
    int target = 3;
    vector<int> res = Find_trgt(nums, target);
    for (auto &val : res)
        cout << val << " ";
}