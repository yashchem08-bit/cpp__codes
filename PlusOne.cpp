// #include <bits/stdc++.h>
// using namespace std;
// void PlusOne(vector<int> &nums)
// {
//     int n = nums.size();
//     int num = 0;
//     int i = 0;
//     while (i < n)
//     {
//         int fdig = nums[i];
//         num += fdig * pow(10, n - i - 1);
//         i++;
//     }
//     cout << num << endl;
//     num += 1;
//     int rev = 0;
//     vector<int> result;
//     while (num != 0)
//     {
//         int ld = num % 10;
//         if (ld == 1)
//         {
//             rev = rev + ld * 10;
//             num /= 10;
//         }
//         else
//         {
//             rev = rev * 10 + ld;
//             num /= 10;
//         }
//     }
//     cout << rev << endl;
//     while (rev != 0)
//     {
//         int ld = rev % 10;
//         if(ld == 0){
//             ld += 1;
//         }else{
//         result.push_back(ld);
//         rev /= 10;
//         result.push_back(0);
//         }

//     }
//     for (auto &val : result)
//     {
//         cout << val << " ";
//     }
// }
// int main()
// {
//     vector<int> nums = {9};
//     PlusOne(nums);
// }

#include <bits/stdc++.h>
using namespace std;
void PlusOne(vector<int> &nums)
{
    int i =0;
    int num = 0;
    int n = nums.size() - 1;
    if (n == 0)
    {
        num = nums[n];
         num += 1;
        vector<int> re;
        
        int ld = num%9;
           re.insert(re.begin(),ld);
           ld = ld%1;
            re.insert(re.end(),ld);
        for (auto &val : re)
        {
            cout << val<<" ";
        }
    }
    else
    {
        nums[n] += 1;
        for (int i = n; i >= 0; i--)
        {
            int fd = nums[i];
            num += fd * pow(10, i);
        }
        cout << num << endl;
        vector<int> re;
        for (int i = 0; i <= n; i++)
        {
            int ld = num % 10;
            re.push_back(ld);
            num /= 10;
        }
        for (auto &val : re)
        {
            cout << val;
        }
    }
}
int main()
{
    vector<int> nums = {9};
    PlusOne(nums);
}