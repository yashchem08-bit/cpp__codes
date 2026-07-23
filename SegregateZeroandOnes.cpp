#include<bits/stdc++.h>
using namespace std;
void segregate(vector<int> &arr){
    int zerocount = 0 , onecount = 0;
    for(int i = 0 ; i<arr.size();i++){
        if(arr[i] == 0){
            zerocount++;
        }else{
            onecount++;
        }
    }
    arr.clear();
    for(int i = 0 ;i<zerocount;i++){
        arr.push_back(0);
    }
     for(int i = 0 ;i<onecount;i++){
        arr.push_back(1);
    }
     for(int i = 0 ;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {0,1,1,1,0,1,0,1,1,0};
    segregate(arr);
}