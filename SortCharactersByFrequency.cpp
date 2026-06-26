#include <bits/stdc++.h>
using namespace std;
string freq(string s)
{
    sort(s.begin(), s.end());
    unordered_map<string, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        string str;
        str = s[i];
        m[str]++;
    }
    vector<string> st;
    vector<int> temp;
    set<string> used;
    for (auto &val : m)
    {
        temp.push_back(val.second);
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    for (int i = 0; i < temp.size(); i++)
    {
        int tmp = temp[i];
        for (auto &out : m)
        {
            if (out.second == tmp && used.find(out.first) == used.end())
            {
                for (int j = 0; j < tmp; j++)
                {
                    string r = out.first;
                    st.push_back(r);
                }
                used.insert(out.first);
            }
        }
    }
    
     string result = "";
    for(auto &val : st){
        result += val + " ";
     }
    return result;
}
int main()
{
    string s = "Aabb";
    cout<<freq(s);
}