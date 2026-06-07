#include<bits/stdc++.h>
using namespace std;
int main(){
// pair<int,string> p;
// p = make_pair(2,"yash");
// p = {2,"yash"}; 
// cout<<p.first<<" "<<p.second;

pair<int , int> p_arr[3];
p_arr[0] = {1,2};
p_arr[1] = {3,4};
p_arr[2] = {5,6};

for(int i = 0;i <3; i++){
    cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
}
swap(p_arr[0],p_arr[2]);
for(int i = 0;i <3; i++){
    cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
}
}