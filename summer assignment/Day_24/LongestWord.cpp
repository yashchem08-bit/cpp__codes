#include <bits/stdc++.h>
using namespace std;
void longestword(string &str)
{    string temp;
    string longstr;
    int count = 0;
    int size = 0;
    for (int i = 0; i < str.size(); i++)
    {
       
        if (str[i] == ' ')
        {
            count++;
        }
        else
        {
            temp += str[i];
            
        }
            size = temp.size();
            longstr = temp;
            if (size > 0 && temp.size() > longstr.size())
            {
                longstr = temp;
            }
    }

    cout<<longstr<<endl;
}
int main()
{
    string str = "hello there is yash";
    longestword(str);
}