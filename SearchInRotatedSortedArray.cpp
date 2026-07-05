// #include<bits/stdc++.h>
// using namespace std;
// int bin_search(vector<int> &nums , int target , int &i , int &j){
    
//     while(i < j){
//         int mid = (i+j)/2;
//         if(nums[mid] == target){
//             return mid;
//         }else if(nums[mid] < target){
//             i = mid+1;
//         }else{
//             j = mid-1;
//         }
//     }
//     return -1;
// }
// int idx_search(vector<int> &nums, int target){
//     int st = 0;
//     int end = nums.size()-1;
//     int k = 0;
//     for(int i = 1;i<=end;i++){
//         if(nums[i] < nums[i-1]){
//             k = i;
//             break;
//         }
//     }
//     if(nums[k] == target){
//         return k;
//     }
//     else if(nums[k] < target){
//         int right = bin_search(nums,target,k,end);
//         return right;
//     }else{
//          int left = bin_search(nums,target,st,k);
//          return left;
//     }
//    cout<<right<<endl<<left<<endl;

//     return -1;
// }
// int main(){
//     vector<int> nums = {4,5,6,7,0,1,2};
//     int target = 1;
//     idx_search(nums,target);
// }



#include<bits/stdc++.h>
using namespace std;
int idx_search(vector<int> &nums, int target){
     int i = 0, j = nums.size() - 1;
    
    while(i <= j){
        int mid = (i + j) / 2;
        
        if(nums[mid] == target){
            return mid;
        }
        
       
        if(nums[i] <= nums[mid]){
          
            if(nums[i] <= target && target < nums[mid]){
                j = mid - 1; 
            }else{
                i = mid + 1;  
            }
        }else{
           
            if(nums[mid] < target && target <= nums[j]){
                i = mid + 1;  
            }else{
                j = mid - 1;  
            }
        }
    }
    return -1;
   
}
int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 1;
    idx_search(nums,target);
}
