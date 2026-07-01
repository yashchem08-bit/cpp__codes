#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Four_sum(vector<int> &nums, int &trgt)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1, right = n - 1;
            while (left < right)
            {
                if (nums[i] + nums[j] + nums[left] + nums[right] == trgt)
                {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]){
                    }
                        left++;
                    while (left < right && nums[right] == nums[right - 1]){
                        right--;
                    }
                    left++;
                    right--;
                }
                else if (nums[i] + nums[j] + nums[left] + nums[right] < trgt)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
    }
    return result;
}
int main()
{
    vector<int> nums = {1,0,-1,0,-2,2};
    int trgt;
    cin >> trgt;
    vector<vector<int>> ans = Four_sum(nums, trgt);
    for (auto &val : ans)
    {
        for (auto &out : val)
        {
            cout << out << " ";
        }
        cout << endl;
    }
}
