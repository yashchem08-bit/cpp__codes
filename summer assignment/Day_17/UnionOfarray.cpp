#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
void Union( int num1[],int num2[],int &n ,int&m){
   vector<int> list;
    set<int> st;
    for(int i = 0;i<n;i++){
        st.insert(num1[i]);
    }
    for(int j = 0;j<m;j++){
        st.insert(num2[j]);
    }
    for(auto it:st){
        list.push_back(it);
    }
    sort(list.begin(),list.end());
    for(auto val : list){
        cout<<val<<" ";
    }
}
int main(){
   int num1[3] = {1,2,3};
    int num2[3] = {2,4,5};
    int n = 3 , m = 3;

    Union(num1,num2,n,m);
   
}