#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {0,1,3,4};
    int n = 4;
    int Nsum = n*(n+1)/2;
    for(auto &val  : nums){
        Nsum -= val;
    }
    cout<<Nsum<<endl;
}