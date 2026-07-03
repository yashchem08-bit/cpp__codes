#include <bits/stdc++.h>
using namespace std;
int Three_sum_closet(vector<int> &nums, int trgt)
{
    int n1 = nums.size();
    sort(nums.begin(), nums.end());
    bool foundinsum = false;
    vector<int> Nsum ;
    for (int i = 0; i < n1; i++)
    {
        

        int left = i + 1, right = n1 - 1;
        while (left < right)
        {

            int sum = nums[i] + nums[left] + nums[right];
            Nsum.push_back(sum);
            
          
                if (sum == trgt)
                {
                    foundinsum = true;
                    while (left < right && nums[left] == nums[left + 1])
                    {
                        left++;
                    }

                    while (left < right && nums[right] == nums[right - 1])
                    {
                        right--;
                    }

                    left++;
                    right--;
                }
                else if (sum < trgt)
                {
                    left++;
                }
                else
                {
                    right--;
                }
              
    }
    
   
}
if(foundinsum == true){
    return trgt;
}
bool found = false;
 for(auto &val : Nsum){
        if(val >= trgt){
            found = true;
            return val;
            break;
        }
    }
   int y = 0; 
    if(found == false){
        
       for(auto &val : Nsum){
        
       }
       
    } 
    return y;
}
int main()
{
    vector<int> nums = {-1,2,1,-4};
    int trgt = 1;

    cout << Three_sum_closet(nums, trgt) << endl;
}