#include<bits/stdc++.h>
using namespace std;
vector<int> Single_Number(vector<int> &nums){
    int cnt1 = 0 ,cnt2 = 0;
    int i = 0 , j = i+1;
    int n = nums.size();
    while(i != n || j != n){
        int fd = nums[i];
        int sd = nums[j];
        if(fd == sd ){
            cnt1++;
            i++;
            continue;
        }else{
            j++;
        }
        
        if(sd == nums[j] && sd != fd){
            cnt2++;
            j++;
            continue;
        }else{
            i++;
        }
    }
    
}
int main(){
    vector<int> nums = {1,2,1,3,2,5};
    Single_Number(nums);
}