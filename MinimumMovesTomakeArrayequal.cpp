#include<bits/stdc++.h>
using namespace std;
int moves(vector<int> &nums){
    int n = nums.size();
    int max = INT_MIN;
    for(auto &val : nums){
        if(max < val){
            max = val;
        }
    }
    vector<int> count;
    int cnt = 0;
    for(int i = 0 ;i<n-1;i++){
        if(nums[i] <= max){
            int d = max-nums[i];
             cnt += d;
             
        }
        count.push_back(cnt);
    }
    int min = *min_element(count.begin(),count.end());
    return min;

}
int main(){
    vector<int> nums = {1,1,100000000};
    cout<<moves(nums);
}



























#include<bits/stdc++.h>
using namespace std;
int moves(vector<int> &nums){
    long long count = 0;
    int min = *min_element(nums.begin(),nums.end());

    for(int &val : nums){
        count += (val-min);
    }

    return (int)count;
}
int main(){
    vector<int> nums = {1,2,3};
    cout<<moves(nums);
}



