// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> Three_sum( vector<int> &nums){
//     int remain;
//     bool found = false;
//     vector<vector<int>> idx;
//     int i = 0 ,j=0;
//     vector<int> k ;

//     int l = 0;
//     while(i<nums.size() ){
//         int sum = nums[i];
//         for(j = i+1;j<nums.size();j++){
//             sum += nums[j];
//             k.push_back(-sum);
//         }
//             i++;
//     }
// for(int i = 0 ;i<nums.size();i++){
//     if(k[i] == nums[i]){
//         idx.push_back({i,j,k[i]});
//     }
// }
//     return idx;
// }
// int main()
// {
//     vector<int> nums = {-1,0,1,2,-1,-4};
//     vector<vector<int>> sum = Three_sum(nums);
//     for(auto &val:sum){
//         for(auto &out : val){
//             cout<<out<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> Three_sum( vector<int> &nums){
//     vector<vector<int>> result;
//     bool found = false;
//     for(int i = 0;i<nums.size();i++){
//         for(int j = i+1 ;j<nums.size();j++){
//             for(int k = j+1 ;k<nums.size();k++){
//                 if(nums[i]+nums[j]+nums[k] == 0){
//                     found = true;
//                     result.push_back({nums[i],nums[j],nums[k]});
//                 }
//             }
//         }
//     }
//     if(!found){
//         result.push_back({ });
//     }else{
//         cout<<"EXISTING INDCES ARE : :"<<endl;
//         for(auto &val : result){
//             for(auto &out : val){
//                 cout<<out<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }
// int main()
// {
//     vector<int> nums = {0,0,0};
//    Three_sum(nums);
// }

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Three_sum(vector<int> &nums)
{
    vector<vector<int>> result;
    
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int n = nums[i];
        int left = i+1, right = nums.size()-1;
        while (left < right)
        {
            if (i != left && i != right)
            {
                if (n + nums[left] + nums[right] == 0)
                {
                    result.push_back({n, nums[left], nums[right]});
                    while(nums[left] == nums[left+1]) left++;
                    while(nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
                }
                else if (n + nums[left] + nums[right] < 0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
            else
            {
                left++;
                right--;
            }
        }
    }
    
     if(result.empty()){
            result.push_back({});
            return result;
        }else{
            return result;
        }
}
int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = Three_sum(nums);
    for (auto &val : ans)
    {
        for (auto &out : val)
        {
            cout << out << " ";
        }
        cout << endl;
    }
}