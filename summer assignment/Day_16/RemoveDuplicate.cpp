#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int Remove(vector<int> &vec){
    unordered_set <int> seen;
    vector<int> result;
    for(auto &val : vec){
       if(seen.find(val) == seen.end()){
        result.push_back(val);
        seen.insert(val);
       }
    }
    for(auto &out : result){
        cout<<out<<" ";
    }
}
int main()
{
    vector<int> vec = {5,3,2,2,3,5,6}; 
    Remove(vec);
}