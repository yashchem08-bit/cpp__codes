#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    unordered_map<string, int> m;
    cout << "Enter string :: ";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        string s;
        s = str[i];
        m[s]++;
    }
    int count = 0;
    bool odd = false;
    for (auto &pr : m)
    {
        if (pr.second % 2 == 0)
        { // even
            count += pr.second;
        }
        else
        {   // odd
            count += pr.second - 1;
            odd = true;
        }
    }
    if (odd == true)
    {
        count++;
    }
    int i = 0, j = count - 1;

    vector<string> vec;
    for(auto &val : m){
        string s ;
        vec.push_back(val.first);

    }
    unordered_map<string ,int> :: iterator it;
    vector<string> st;
    while (i < j)
    {
        if ((*it).second % 2 == 0)
        {   
            string s ;
            s = vec[i] ;
            st.push_back(s);
            st[i] = s;
        }
        j--;
        i++;
    }
    for(auto & val : vec){
        cout<<val <<" ";
    }
    
}