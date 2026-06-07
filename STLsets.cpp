// #include<bits/stdc++.h>
// using namespace std;
// void print_set(set<string> s ){
//     for(string str : s){
//         cout<<str<<endl;
//     }
//     // for(auto it = s.begin();it != s.end();it++){
//     //     cout<<(*it)<<" "<<endl;
//     // }
// }
// int main(){
//      set<string> s;
//     s.insert("abc");    //0(logn)
//     s.insert("int");
//     s.insert("jsjd");
//     auto it  = s.find("abc");
//     cout<<(*it)<<endl;
//     print_set(s);
//     s.erase("abc");
//     print_set(s);
     
// }











// given n strings  , print unique strings in lexographical order //


// #include<bits/stdc++.h>
// using namespace std;
// void print_string(set<string> s){
//     for(auto val : s){
//         cout<<val<<" "<<endl;
//     }
// }
// int main(){
//     set<string> s;   
//     int n ;
//     cout<<"Enter n :: ";
//     cin>>n;
//     for(int i =0; i<=n ;i++){
//         string str;
//         getline(cin,str);
//         s.insert(str);
//     }
//     print_string(s);
     
// }











// given n string and q queries in each query you are given a string print yes is string is present else print no..

#include<bits/stdc++.h>
// #include"message.h"
// void print(){
//     message("hello world");
// }
using namespace std;
void input_set(unordered_set<string> &s , int &n ){
    for(int i = 0; i<=n;i++){
        string str;
        getline(cin,str);
        s.insert(str);
    }
    
}
int main(){
     unordered_set<string> s;
     int n ;
     cout<<"Enter n :: ";
     cin>>n;
     input_set(s,n);
    int q;
    cout<<"Enter q :: ";
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }
    
}