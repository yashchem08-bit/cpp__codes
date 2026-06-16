#include <bits/stdc++.h>
using namespace std;
void PlusOne(vector<int> &nums)
{
    int n = nums.size();
    int num = 0;
    int i = 0;
    while (i < n)
    {
        int fdig = nums[i];
        num += fdig * pow(10, n - i - 1);
        i++;
    }
    cout << num << endl;
    num += 1;
    int rev = 0;
    vector<int> result;
    while (num != 0)
    {
        int ld = num % 10;
        if (ld == 1)
        {
            rev = rev + ld * 10;
            num /= 10;
        }
        else
        {
            rev = rev * 10 + ld;
            num /= 10;
        }
    }
    cout << rev << endl;
    while (rev != 0)
    {
        int ld = rev % 10;
        if(ld == 0){
            ld += 1;
        }else{
        result.push_back(ld);
        rev /= 10; 
        result.push_back(0);
        }
        
    }
    for (auto &val : result)
    {
        cout << val << " ";
    }
}
int main()
{
    vector<int> nums = {9};
    PlusOne(nums);
}