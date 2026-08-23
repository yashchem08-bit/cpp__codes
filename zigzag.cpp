#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};
    int m = nums.size();
    int n = nums[0].size();

    vector<vector<int>> K;
    int k = 0;
    for(int i = 0; i<m;i++){
        for(int j = 0 ;j<n;j++){
            K.push_back({k++});
        }
        k = i;
        k++;
    }
    

    vector<int> ans;
    int p = 0 , q = 0;
    int x = 0 , y = 0;
    for(int i = 0;i<m;i++){
        int sum = K[x][y];
        for(int j = 0 ;j<n;j++){
            if((p+q) == sum){
                ans.push_back(nums[p][q]);
                p++;
            }
            q = p;
            p--;
        }
        x++;
        y++;
    }
    for(auto &val : ans){
        cout<<val<<" ";       
    }


    
}