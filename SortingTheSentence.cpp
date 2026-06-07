#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str = "is2 this1 sentence4 a3";
    vector<string> ans(10);
    int count = 0;
    string temp = "";
    for (int idx = 0; idx <= str.size(); idx++)
    {
        if (str[idx] == ' ' || idx == str.size())
        {
            int tem = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[tem] = temp;
            temp = "";
            count++;
        }
        else
        {
            temp += str[idx];
        }
    }
    for (int i = 1; i <= count; i++)
    {
        cout << ans[i] << " ";
    }
}