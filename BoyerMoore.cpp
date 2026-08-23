// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums = {3,4,3,4,4,2};   // majority element calculation
//     int cd = 0 , count = 0;
//     for(int i = 0 ;i<nums.size();i++){
//         if(count == 0){
//             cd = nums[i];
//         }
//         if(cd == nums[i]){
//             count++;
//         }else{
//             count--;
//         }
//     }
//     cout<<cd<<endl;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> nums = {1,3,3,4,2,3,3,2};
    int n = nums.size();
    // int cd = 0 , count = 0;
    // for(int i = 0 ;i<nums.size();i++){
    //     if(count == 0){
    //         cd = nums[i];
    //     }
    //     if(cd == nums[i]){
    //         count++;
    //     }else{
    //         count--;
    //     }
    // }
    // cout<<cd<<endl;
    vector<int> ans;
    for(int i = 0 ;i<n;i++){
        int cnt = 0 , cd = nums[i];
        for(int j = 1 ;j<n;j++){
            if(cd == nums[j]){
                cnt++;
            }
        }
        ans.push_back(cnt);
    }

     for(auto &val : ans){
        if(val>=2){
            cout<<val<<" ";
        }
        
    }

}


