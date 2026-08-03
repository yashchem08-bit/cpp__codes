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
    int cd = 0 , count = 0;
    for(int i = 0 ;i<nums.size();i++){
        if(count == 0){
            cd = nums[i];
        }
        if(cd == nums[i]){
            count++;
        }else{
            count--;
        }
    }
    cout<<cd<<endl;
}


