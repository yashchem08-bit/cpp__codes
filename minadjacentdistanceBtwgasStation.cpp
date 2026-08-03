#include<bits/stdc++.h>
using namespace std;
double minmax_gap(vector<int> &nums , int &k){
    int n = nums.size();
    int l = INT_MIN , sl = INT_MIN , ssl = INT_MIN;
    for(int i = n-1;i>=0;i--){
        l = nums[i];
        sl = nums[i-1];
        ssl = nums[i-2];
        if(l-sl >= sl - ssl){
            int min1 = INT_MAX , min2 = INT_MAX;
            for(int j = 1; j<=l-sl;j++){
                if(i - (l-sl)/2 > (l- sl))
            }
        }
    }
}
int main(){
    vector<int> nums = {3,6,12,19,33};
    int k = 3;
}