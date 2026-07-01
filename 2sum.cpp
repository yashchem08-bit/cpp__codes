#include<bits/stdc++.h>
using namespace std;
// void Two_sum(int arr[],int &n,int &trgt){
//     bool found = false;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if( trgt == arr[i]+arr[j]){
//                 found = true;
//                 cout<<"INDICES ARE :: "<<i<<" "<<j<<endl;
//             }
//         }
//     }
//     if(! found){
//         cout<<"--NO MATCHING INDICES FOUND--";
//     }
// }
vector<int> Two_sum(vector<int> &arr,int &trgt){
    vector<int> ans;
    map<int,int> m;
    for(int i = 0 ;i<arr.size();i++){
        int x = arr[i];
        m[i] = x;
    }
    sort(arr.begin(),arr.end());
    int low = 0;
    int high = arr.size()-1;
    while(low < high){
        if(arr[low]+arr[high] == trgt){
            ans.push_back(low);
            ans.push_back(high);
            break;
        }else if(arr[low]+arr[high] < trgt){
            low++;
        }else{
            high--;
        }
    }
    int i = 0;
    vector<int> res;
    for(auto &val :m){
       int x = ans[i];
       int y = arr[x];
       if(m.find(y) != m.end()){
        auto it = m.find(y);
        res.push_back(it->first);
       }
       i++;
    }
    return res;
}
int main(){
    vector<int> arr = {2,6,4,8,3,9,1};
    int trgt = 7;
    vector<int> re = Two_sum(arr,trgt);
    for(auto &val : re){
        cout<<val<<" ";
    }
}

