#include<bits/stdc++.h>
using namespace std;
string per(vector<int> &arr,int idx){
     string str;
     int max = INT_MIN;
    if (idx >= arr.size()){
        for(auto &val : arr){
           str.push_back(val);
        //    if(max < val){
        //     max = val;
        //    }
        }

    // cout<<max;  
    cout<<str; 
    }

    
    
    for(int i = idx ;i< arr.size();i++){
        swap(arr[idx],arr[i]);
        per(arr,idx+1);
        swap(arr[idx],arr[i]);
    }
    
}
int main(){
    vector<int> arr = {3,30,34,5,9};
    int idx = 0;
    per(arr,idx);
}
// #include<bits/stdc++.h>
// using namespace std;\
// void Reverse(vector<int> &arr,int n){
//     int i = 0;
//     int j = n-1;
//     while(i < j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(auto &val:arr){
//         cout<<val;
//     }
// }
// string per(vector<int> &arr){
//    int n = arr.size();
//     sort(arr.begin(),arr.end());
//     for(auto &val:arr){
//         cout<<val;
//     }
//     //Reverse(arr,n);
    
// }
// int main(){
//     vector<int> arr = {3,30,34,5,9};
    
//     per(arr);
// }