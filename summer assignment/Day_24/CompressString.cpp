// #include <bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// void compress(string &str, vector<string> &ans)
// {
//     map<string, int> m;
//     for (int i = 0; i < str.size(); i++)
//     {
//         string temp;
//         temp = str[i];
//         m[temp]++;
//     }
//     for (auto &val : m)
//     {
//         ans.push_back(val.first);
//         ans.push_back(to_string(val.second));
//     }
//     for (auto &out : ans)
//     {
//         cout << out<<" ";
//     }
// }
// int main()
// {
//     string str;
//     getline(cin, str);
//     vector<string> ans;
//     compress(str, ans);
// }
#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    char last=a[0];
    int count=1;
    for(int i=1;i<a.size();i++){
        if(last==a[i]){
            count+=1;
            last=a[i];
        }
        else{
            cout<<last<<count;
            count=1;
            last=a[i];
        }
    }
    cout<<last<<count;
}