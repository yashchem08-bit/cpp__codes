#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> two_sum(vector<int> &skill){

    sort(skill.begin(),skill.end());
    vector<pair<int,int>> sum ;
    int i = 0 , j = skill.size()-1;
    while(i <= j){
        sum.push_back({skill[i],skill[j]});
        i++;
        j--;
    }
    
    return sum;
}
long long divide(vector<int> &skill){
    vector<pair<int,int>> Two_sum = two_sum(skill);

    int i = 0 , j = 1;
    while(i < Two_sum.size() && j < Two_sum.size()){
        int sum = Two_sum[i].first + Two_sum[i].second;
        int sum1 = Two_sum[j].first + Two_sum[j].second;
        if(sum == sum1){
            i++;
            j++;
            continue;
        }else{
            return -1;
        }
    }

    long long sum = 0 ;
    for(auto &val : Two_sum){
        sum += (val.first*val.second);
    }
    return sum;
}
int main(){
    vector<int> skill = {1,2,1,2}; // {1 , 2 , 3 , 3, 4, 5};
    cout<<divide(skill)<<endl;
}