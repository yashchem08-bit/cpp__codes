#include<bits/stdc++.h>
using namespace std;
void Sort(vector<int> &a , vector<int> &b){
    int j = 0;
    for(int i = 0 ;i<a.size();i++){
            if(j < b.size() && a[i] > b[j]){
                swap(a[i],b[j]);
                j++;
            }  
        
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
}
int main(){
    vector<int> a = {1,2,5,6};
    vector<int> b = {3,4,7,8};
    Sort(a,b);
    for(auto &val : a){
        cout<<val<<" ";
    }
    cout<<endl;
    for(auto &val : b){
        cout<<val<<" ";
    }
}