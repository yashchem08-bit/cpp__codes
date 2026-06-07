#include<bits/stdc++.h>
using namespace std;
int main(){
    // map<int , string> m;
    // m[1] = "abc";   //0(logn)
    // m[5] = "cde";
    // m.insert({7,"name"});
    map<int , string> :: iterator it;
    // for( it = m.begin(); it != m.end();it++){   //0(logn)
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // for(auto &pr:m){
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }
    //  auto ite = m.find(5);   //0(logn)
    //  cout<<(*ite).first<<(*ite).second<<endl;
    //  m.erase(5);    //0(logn)






    // given n strings , print unique strings in lexographical orderr with thier frequency
    map<string , int> m;
    int n ;
    cout<<"Enter  n :: ";
    cin>>n;
    for(int i = 0; i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    // unordered_map......
    // unordered_map<int,string> m;
    // m[1] = "abc";   //0(1)
    // m[5] = "cde";
    // m.insert({7,"name"});
    // m[4] = "cge";
    // m.insert({2,"nae"});
    // for(auto &pr : m){
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }








    // map<int,string> m;
    // int n ;
    // cout<<"enter n :: ";
    // cin>>n;
    // cout<<"enter pin and string :: ";
    // for(int i=0 ;i<n;i++){
    //     int x ;
    //     string s;
    //     cin>>x>>s;
    //     m.insert({x,s});
    // }
    // cout<<endl<<endl;
    // for(auto &pr:m){
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }

    

}