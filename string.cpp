// #include <bits/stdc++.h>
// using namespace std;
// void Reverse(string name , int i ,int j){
//         while(i<j){
//                 int temp = name[i];
//                 name[i] = name[j];
//                 name[j] = temp;
//                 i++;
//                 j--;
//         }
//         cout<<name<<endl;
// }
// int main()
// {
//         string name = "yash";
//         name.length();
//         // cout << name << endl;
//         // string s = "hello \"good boy\" ";
//         // cout << s << endl;
//         // cout<<"\\"<<endl;
//         int i ,j;
//         Reverse(name,0,name.size()-1);
// }
// #include <iostream>
// #include <algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<string>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<endl;
//     }
// }
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
bool compare(string a,string b){
    if(a.size()<b.size()) return true ;
    else if(a.size()==b.size()){
        return a<b;
    }
    else return false;
}
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}