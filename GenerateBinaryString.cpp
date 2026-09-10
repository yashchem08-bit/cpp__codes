#include<bits/stdc++.h>
using namespace std;
void substring(int n , vector<string>& ans , string ch, int i){
    if(ch.size() == n){
        ans.push_back(ch);
        i = 0;
        return;
    }
    substring(n,ans,ch+"1",i+1);
    if(ch.empty() || ch[i-1] != '0'){
        substring(n,ans,ch+"0",i+1);
    }
}
vector<string> generate_substring(int n ){
    vector<string> ans;
    substring(n,ans,"",0);
    return ans;
}
int main(){
    int n = 3;
    vector<string> final = generate_substring(n);
    for(string val: final){
        cout<<val<<endl;
    }
}