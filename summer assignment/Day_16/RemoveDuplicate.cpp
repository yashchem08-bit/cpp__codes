#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int Remove(vector<int> &vec){
    unordered_set <int> seen;
    for(auto &val : vec){
       if(seen.find(val) == seen.end()){
        seen.insert(val);
       }
    }
    for(auto &out : seen){
        cout<<out<<" ";
    }
}
int main()
{
    vector<int> vec = {5,3,2,2,5,5,54,4,3,5,6}; 
    Remove(vec);
}